#include <stdio.h>

#define N_CHARS 256
#define LENGTH 32

int main() {
    char buffer[LENGTH];
    int count[N_CHARS];

    for(int i = 0; i < N_CHARS; i++) {
        count[i] = 0;
    }

    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

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
