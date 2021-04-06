#include <stdio.h>
#include <stdlib.h>
#include "./lib/huffman.h"

char path[] = "./utils/texto.txt";

int main(int argc, char* argv[]) {
  char* str = importarString(path);
  Lista* teste = computarFrequencia(str);
  percorrer(teste);
  return 0;
}
