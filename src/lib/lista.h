#ifndef LISTA_H 
#define LISTA_H

typedef struct node {
  char letra;
  int frequencia;
  struct node* next;
} Node;

typedef struct {
  Node* inicio;
  Node* fim;
  int tamanho;
} Lista;

Lista* criarLista();
Node* criarElemento(char letra, int frequencia);

void push(Lista* lista, char letra, int frequencia);

void percorrer(Lista* lista);

void swap(Node* a, Node* b);
void bubbleSort(Node* inicio);

#endif
