#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

// Função para criar e setar alguns valores da nova lista
Lista* criarLista() {
  Lista* novaLista = malloc(sizeof(Lista));
  novaLista->inicio = NULL;
  novaLista->fim = NULL;
  novaLista->tamanho = 0;

  return novaLista;
}

// Função para criar um novo nó
Node* criarElemento(char letra, int frequencia)  {
  Node* novoElemento = malloc(sizeof(Lista));
  novoElemento->letra = letra;
  novoElemento->frequencia = frequencia;
  novoElemento->next = NULL;
  return novoElemento;
}

// Função para adicionar um nó na lista, estou usando sempre o adicionar no fim pela complexidade e facilidade na hora de codar
void push(Lista *lista, char letra, int frequencia) {
  Node *element = criarElemento(letra, frequencia);
  if (lista->inicio == NULL) {
    lista->inicio = element;
    lista->fim = element;
  } else {
    lista->fim->next = element;
    lista->fim = element;
  }
  lista->tamanho = lista->tamanho + 1;
}

// Função para printar a lista
void percorrer(Lista* lista) {
  Node* pointer = lista->inicio;
  while(pointer != NULL) {
    printf("[%c, %d]\n", pointer->letra, pointer->frequencia);
    pointer = pointer->next;
  }
  printf("\n");
}

// Algoritmo para trocar os valores dos nós
void swap(Node *a, Node *b) {
  int swap_frequencia = a->frequencia;
  char swap_letra = a->letra;
  a->frequencia = b->frequencia;
  a->letra = b->letra;
  b->frequencia = swap_frequencia;
  b->letra = swap_letra;
}

// Algoritmo para ordenar os nós em ordem crescente [baseando-se na frequência]
void bubbleSort(Node *inicio) {
  int trocado;
  Node *pointer;
  Node *aux = NULL;
  if (inicio == NULL)
    return;
  do {
    trocado = 0;
    pointer = inicio;

    while (pointer->next != aux) {
      if (pointer->frequencia > pointer->next->frequencia) {
        swap(pointer, pointer->next);
        trocado = 1;
      }
      pointer = pointer->next;
    }
    aux = pointer;
  } while (trocado);
}
