#include <stdio.h>

#define SIZE 10

int main() {
    int vec[SIZE] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int counts[5];  // 5 porque é o maior valor em vec + 1
    for(int i = 0; i < 5; i++) {
        counts[i] = 0;  // zera o vetor de contagem
    }
    for(int i = 0; i < SIZE; i++) {
        counts[vec[i]] += 1;
    }
    printf("os seguintes valores estao duplicados no vetor:\n");
    for(int i = 0; i < 5; i++) {
        if(counts[i] > 1) {
            printf("%d: aparece %d vezes\n", i, counts[i]);
        }
    }

    return 0;
}