#include "./huffman.h"
#include <stdio.h>
#include <stdlib.h>

/* Implementação da função para importar a string */
char *importarString(char *path) {
  char *string;
  FILE *buffer = fopen(path, "r");

  if (buffer == NULL) {
    printf("Erro ao tentar ler um arquivo de texto\n");
    return NULL;
  }

  /* Calculando o tamanho, em caracteres, do meu texto */
  fseek(buffer, 0, SEEK_END);
  int size = ftell(buffer);
  string = malloc((sizeof(char) * size + 1));

  fseek(buffer, 0, SEEK_SET);
  int i = 0;
  do {
    char c = fgetc(buffer);
    if (feof(buffer))
      break;
    string[i] = c;
    i++;
  } while (1);

  fclose(buffer);
  return string;
}

Lista *computarFrequencia(char *texto) {
  int count = 0;
  Lista *lista = criarLista();

  for (int i = 0; texto[i] != '\0'; i++) {
    int j = 0;
    while (j < i && texto[i] != texto[j])
      j++;
    if (j == i) {
      count = 1;
      for (int t = i + 1; texto[t] != '\0'; t++) {
        if (texto[i] == texto[t])
          count += 1;
      }
      push(lista, texto[i], count);
    }
  }
  bubbleSort(lista->inicio);
  return lista;
}
