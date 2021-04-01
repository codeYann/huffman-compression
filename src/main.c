#include <stdio.h>
#include <stdlib.h>
#include "./lib/huffman.h"

char path[] = "./utils/book.txt";
int main(int argc, char* argv[]) {
  char* str = importarString(path);
  Fila* teste = filaFrequencia(str);
  return 0;
}
