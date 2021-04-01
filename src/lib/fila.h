#ifndef FILA_H 
#define FILA_H

typedef struct node {
  char letra;
  int frequencia;
  struct node* next;
} Node;

typedef struct  {
  Node* inicio;
  Node* fim;
  int tamanho;
} Fila;

Fila* criarFila();
void append(Fila* fila, char letra, int frequencia);
Node* pop(Fila* fila);
Node* Inicio(Fila* fila);
void percorrer(Fila* fila);
int TamanhoFila(Fila* fila);
#endif
