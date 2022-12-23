# Estruturas

## struct

* Armazena coleções de dados heterogêneos
* Declarado com a palavra reservada `struct`
* Membros de uma estrutura são acessados com `.`
* Podemos definir um tipo a partir de uma estrutura

```C
#include <stdio.h>
#include <string.h>

struct aluno {
    char nome[50];
    int idade;
    int n_materias;
    float media;
};


int main() {
    struct aluno a1;
    a1.nome = "pedro";
    // strcpy(a1.nome, "pedro");
    a1.idade = 18;
    a1.n_materias = 5;
    a1.media = 7;

    printf(
        "nome: %s idade: %d n_materias: %d media: %f\n",
        a1.nome, 
        a1.idade, 
        a1.n_materias, 
        a1.media
    );

    return 0;
}
```

## Tipos a partir de estruturas

```C
struct aluno {
    char nome[50];
    int idade;
    int n_materias;
    float media;
};

typedef struct aluno aluno_t;
```

## Vetores de estruturas

* Permite armazenar uma coleção de dados estruturados

```C
aluno_t vetor[2];

strcpy(vetor[0].nome, "pedro");
vetor[0].idade = 18;
vetor[0].n_materias = 5;
vetor[0].media = 7;

strcpy(vetor[1].nome, "joao");
vetor[1].idade = 20;
vetor[1].n_materias = 3;
vetor[1].media = 6.5;

for(int i = 0; i < 2; i++) {
    printf(
        "nome: %s idade: %d n_materias: %d media: %f\n",
        vetor[i].nome, 
        vetor[i].idade, 
        vetor[i].n_materias, 
        vetor[i].media
    );
}

```
