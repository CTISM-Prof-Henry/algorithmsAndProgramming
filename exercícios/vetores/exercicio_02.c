#include <stdio.h>

#define SIZE 3

int main() {
    int vec[SIZE];
    for(int i = 0; i < SIZE; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vec[i]);
    }
    for(int i = SIZE - 1; i >= 0; i--) {
        printf("[%d]", vec[i]);
    }
    printf("\n");

    return 0;
}