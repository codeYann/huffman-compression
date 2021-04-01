#include "fila.h"
#include <stdlib.h>
#include <stdio.h>


Fila* criarFila() {
  Fila* novaFila = malloc(sizeof(Fila));
  novaFila->inicio = NULL;
  novaFila->fim = NULL;
  novaFila->tamanho = 0;

  return novaFila;
}

Node* criarElemento(char letra, int frequencia)  {
  Node* novoElemento = malloc(sizeof(Fila));
  novoElemento->letra = letra;
  novoElemento->frequencia = frequencia;
  novoElemento->next = NULL;
  return novoElemento;
}

void append(Fila* fila, char letra, int frequencia) {
  Node* element = criarElemento(letra, frequencia);
  if(fila->inicio == NULL) {
    fila->inicio = element;
    fila->fim = element;
  } else {
    fila->fim->next = element;
    fila->fim = element;
  }
  fila->tamanho += 1;
}

Node* Inicio(Fila* fila) {
  return fila->inicio;
}

void percorrer(Fila* fila) {
  Node* pointer = fila->inicio;
  while(pointer != NULL) {
    printf("[%c, %d]\n", pointer->letra, pointer->frequencia);
    pointer = pointer->next;
  }
  printf("\n");
}

Node* pop(Fila* fila) {
  if(fila->inicio == NULL || fila->fim == NULL) {
    return NULL;
  } else {
    Node* pointer = fila->inicio;
    fila->inicio = fila->inicio->next;
    fila->tamanho = fila->tamanho - 1;
    return pointer;
  }
}

int TamanhoFila(Fila* fila) {
  return fila->tamanho;
}
