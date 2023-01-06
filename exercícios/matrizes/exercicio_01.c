#include <stdio.h>

#define SIZE 3

int main() {
    int matrix[SIZE][SIZE] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
