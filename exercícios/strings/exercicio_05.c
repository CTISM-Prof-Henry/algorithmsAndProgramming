#include <stdio.h>

int main() {
    char bufferA[32];
    char bufferB[32];
    printf("digite a primeira frase: ");
    fgets(bufferA, sizeof bufferA, stdin);
    printf("digite a segunda frase: ");
    fgets(bufferB, sizeof bufferB, stdin);

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

