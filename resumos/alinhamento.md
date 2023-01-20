# Alinhamento de dados

Quando trabalhamos com uma estrutura, os dados dentro dela precisam estar **alinhados**, para melhorar o desempenho de 
acesso aos dados na memória. 

O alinhamento depende do tamanho que cada tipo de dado ocupa na memória:

* char (1 byte): pode ser alocado em qualquer posição da memória
* int (4 bytes): precisa estar alocado em posições múltiplas de 4 na memória
* float (4 bytes): precisa estar alocado em posições múltiplas de 4 na memória
* double (8 bytes): precisa estar alocado em posições múltiplas de 8 na memória

O tipo de dado mais "largo" dentro de uma estrutura de dados ditará qual o alinhamento que será seguido pela estrutura.

Vetores de dados também influenciam no alinhamento. Por exemplo, as duas estruturas abaixo ocupam o mesmo espaço em 
memória:

```C
struct T1 {
    int a;
    double b;
};

struct T2 {
    int a[2];
    double b;
};
```

Isto ocorre porque em T1 4 bytes estão sendo utilizados para alinhamento (_padding_).
O processo de alinhamento é realizado automaticamente pelo compilador.

Consulte o arquivo de código-fonte [data_alignment](data_alignment.c) para um exemplo executável.

## Bibliografia

* [Desligando o alinhamento de dados](https://www.geeksforgeeks.org/how-to-avoid-structure-padding-in-c/) (em inglês)