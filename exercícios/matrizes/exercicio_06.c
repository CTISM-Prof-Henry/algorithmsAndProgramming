#include <stdio.h>

#define SIZE 3

int main() {
    int A[SIZE][SIZE] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    };
    int B[SIZE][SIZE] = {
    {2, 1, 3},
    {3, 2, 1},
    {1, 3, 2}
    };
    int C[SIZE][SIZE];

    // multiplica
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            C[i][j] = 0;
            for(int k = 0; k < SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // imprime
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
