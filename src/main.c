#include <stdio.h>
#include <stdlib.h>
#include "./lib/huffman.h"

char path[] = "./utils/book.txt";

int main(int argc, char* argv[]) {
  char* str = importarString(path);
  printf("%s\n", str);
  return 0;
}
