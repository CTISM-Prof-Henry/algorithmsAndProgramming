#include <stdio.h>

#define SIZE 5

int main() {
    char matrix[SIZE][SIZE];

    // inicializa com laços de repetição
    char letra = 'a';
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            matrix[i][j] = letra;
            letra++;
        }
    }

    // imprime
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
