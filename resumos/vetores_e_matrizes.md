# Conjuntos de dados

## Vetores

* Armazena dados de maneira contígua em memória
* Coleção homogênea de dados
* Estrutura unidimensional (1D)
   ```C
  #include <stdio.h>
  
  #define SIZE 5 
  
  int main() {
      int vec[SIZE] = {1, 2, 3, 4, 5};
		  for(int i = 0; i < SIZE; i++) {
		      printf("%d\n", vec[i]);
      }
      return 0;
  }
   ```

## Matrizes

* Armazena dados de maneira contígua em memória
* Coleção homogênea de dados
* Estrutura bidimensional (2D)
    * É acessada bidimensionalmente (2D)
    * É alocada unidimensionalmente (1D)

```C
#include <stdio.h>

int main() {
// lendo dados com scanf

int vetor[3][3];

for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        printf("digite um numero: ");
        scanf("%d", &vetor[i][j]);
    }
    }
    printf("a matriz lida foi:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%d]", vetor[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
```



