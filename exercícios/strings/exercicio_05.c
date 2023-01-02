#include <stdio.h>

#define LENGTH 32

int main() {
    char bufferA[LENGTH];
    char bufferB[LENGTH];
    printf("digite a primeira frase: ");
    fgets(bufferA, LENGTH, stdin);
    printf("digite a segunda frase: ");
    fgets(bufferB, LENGTH, stdin);

    int i = 0;
    int j = 0;
    while(bufferA[i] != '\0') {
        i++;
    }
    while(bufferB[j] != '\0') {
        j++;
    }
    if(i != j) {
        printf("As frases sao diferentes.\n");
        return 0;
    }
    int c = 0;
    while(bufferA[c] != '\0' && bufferB[c] != '\0') {
        if(bufferA[c] != bufferB[c]) {
            printf("As frases sao diferentes.\n");
            return 0;
        }
        c++;
    }
    printf("As frases sao identicas!");
    return 0;
}

