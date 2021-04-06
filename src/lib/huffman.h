#ifndef HUFFMAN_H
#define HUFFMAN_H
#include <stdio.h>
#include "lista.h"


// Função para importar a string de um arquivo txt
char* importarString(char* path);

// Função para computador a frequência de cada caractere
Lista* computarFrequencia(char* texto);
#endif
