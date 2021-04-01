# Documentação da implementação das principais funções do projeto

## Tratamento do texto 

Para a construção da árvore de huffman é extremamente necessário importar todo o texto que vai se encontrar no arquivo txt para uma string. O algoritmo [importarString](https://github.com/codeYann/huffman-compression/blob/main/src/lib/huffman.c) faz duas importantes funções:

* Calcula o tamanho do texto e aloca espaço para a string que retornaremos
* insere caractere à caractere na string que retornaremos
