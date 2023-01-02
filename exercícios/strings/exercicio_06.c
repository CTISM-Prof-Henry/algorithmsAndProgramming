#include <stdio.h>

#define N_CHARS 256

int main() {
    char buffer[32];
    int count[256];

    for(int i = 0; i < N_CHARS; i++) {
        count[i] = 0;
    }

    printf("digite uma frase: ");
    fgets(buffer, sizeof buffer, stdin);

    int j = 0;
    while(buffer[j] != '\0') {
        count[buffer[j]] += 1;
        j++;
    }

    int distinct = 0;
    for(int i = 0; i < N_CHARS; i++) {
        if(count[i] > 0) {
            distinct++;
        }
    }
    printf("a frase possui %d caracteres distintos.\n", distinct);

    return 0;
}
