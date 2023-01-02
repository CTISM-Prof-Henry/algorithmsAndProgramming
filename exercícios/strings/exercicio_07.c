#include <stdio.h>

#define LENGTH 32

int main() {
    char bufferA[LENGTH];
    char bufferB[LENGTH];

    printf("digite uma frase: ");
    fgets(bufferA, LENGTH, stdin);

    int i = 0;
    while(bufferA[i] != '\0') {
        bufferB[i] = bufferA[i];
        i++;
    }
    bufferB[i] = '\0';

    printf("a frase copiada e:\n");
    printf("%s\n", bufferB);

    return 0;
}
