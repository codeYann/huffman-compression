#include "./huffman.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Implementação da função para importar a string */
char* importarString(char* path) {
  char* string;
  FILE* buffer = fopen(path, "r"); 

  if(buffer == NULL) {
    printf("Erro ao tentar ler um arquivo de texto\n");
    return NULL;
  }

  fseek(buffer, 0, SEEK_END);
  int size = ftell(buffer);
  string = malloc((sizeof(char) * size + 1)); 

  fseek(buffer, 0, SEEK_SET);
  int i = 0;
  do {
    char c = fgetc(buffer);
    if(feof(buffer))
      break;
    string[i] = c;
    i++;
  } while(1);

  fclose(buffer);
  return string; 
}

Fila* filaFrequencia(char* texto) {
  int count = 0;
  Fila* fila = criarFila();

  for(int i = 0; texto[i] != '\0'; i++) {
    int j = 0;
    while(j < i && texto[i] != texto[j])
      j++;
    if(j==i) {
      count = 1;
      for(int t = i+1; texto[t] != '\0'; t++) {
        if(texto[i] == texto[t])
          count += 1;
      } 
      append(fila, texto[i],  count);
    }
  }
  percorrer(fila);
  printf("Tamanho => %d\n", TamanhoFila(fila));
  return fila;
}
