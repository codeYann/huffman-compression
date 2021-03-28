#include "./huffman.h"
#include <stdio.h>
#include <stdlib.h>

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
