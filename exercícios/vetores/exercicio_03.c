#include <stdio.h>

#define SIZE 3

int main() {
    int vec[SIZE] = {2, 3, 4};
    int soma = 0;
    printf("o vetor e\n");
    for(int i = 0; i < SIZE; i++) {
        printf("[%d]", vec[i]);
        soma += vec[i];
    }
    printf("\na soma do vetor e %d\n", soma);

    return 0;
}