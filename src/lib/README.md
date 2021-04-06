# Documentação da implementação das principais funções do projeto

### Tratamento do texto

Para a construção da árvore de huffman é extremamente necessário importar todo o texto que vai se encontrar no arquivo txt para uma string. O algoritmo [importarString](https://github.com/codeYann/huffman-compression/blob/main/src/lib/huffman.c) faz duas importantes funções:

- Calcula o tamanho do texto e aloca espaço para a string que retornaremos
- insere caractere à caractere na string que retornaremos

### Computando a frequência dos caracteres do texto

A resolução desse problema precisou de duas etapas: (1) Criar uma estrutura para armazenar a relação dos caracteres e suas frequências, assim como, (2) uma função que conte a frequência dos caracteres e retorne uma lista com a estrutura criada em (1)

- (1) - A estrutura utilizada foi uma lista, onde cada nó armazena um caractere e sua frequência. Para ver as definições das funções da lista: [Definições](https://github.com/codeYann/huffman-compression/blob/main/src/lib/lista.h). Para ver a implementação da lista: [Implementação](https://github.com/codeYann/huffman-compression/blob/main/src/lib/lista.c)
- (2) - A função [computaFrequencia](https://github.com/codeYann/huffman-compression/blob/main/src/lib/huffman.c) é responsável por computar a frequência dos caracteres do texto. 
