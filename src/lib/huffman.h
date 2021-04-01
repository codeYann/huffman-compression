#ifndef HUFFMAN_H
#define HUFFMAN_H
#include <stdio.h>
#include "fila.h"


// Função para importar a string de um arquivo txt
char* importarString(char* path);
Fila* filaFrequencia(char* texto);
#endif


