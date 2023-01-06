#include <stdio.h>

#define SIZE 5

int main() {
    int matrix[SIZE][SIZE];

    // inicializa com laços de repetição
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            matrix[i][j] = 1;
        }
    }

    // imprime
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
