#include <stdio.h>

#define SIZE 3

int main() {
    int vec1[SIZE] = {2, 3, 4};
    int vec2[SIZE];
    int soma = 0;
    printf("o primeiro vetor e\n");
    for(int i = 0; i < SIZE; i++) {
        printf("[%d]", vec1[i]);
        vec2[i] = vec1[i];
    }
    printf("\no segundo vetor e\n");
    for(int i = 0; i < SIZE; i++) {
        printf("[%d]", vec2[i]);
    }
    printf("\n");
    return 0;
}