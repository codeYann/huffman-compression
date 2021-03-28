#ifndef NODE_H
#define NODE_H

// Estrutura que utilizaremos para criar a árvore de huffman
typedef struct node {
  struct node* left;
  struct node* right;
  int frequencia;
  char letra;
} Node;

#endif
