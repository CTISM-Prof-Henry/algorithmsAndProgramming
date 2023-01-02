#include <stdio.h>

#define LENGTH 32

int main() {
    char buffer[LENGTH];

    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

    int i = 0;
    int consoantes = 0;
    int vogais = 0;
    while(buffer[i] != '\0') {
        if(
            buffer[i] == 'a' || buffer[i] == 'e' || buffer[i] == 'i' || buffer[i] == 'o' || buffer[i] == 'u' ||
            buffer[i] == 'A' || buffer[i] == 'E' || buffer[i] == 'I' || buffer[i] == 'O' || buffer[i] == 'U')
        {
            vogais++;
        } else if((buffer[i] >= 'a' && buffer[i] <= 'z') || ((buffer[i] >= 'A') && (buffer[i] <= 'Z'))) {
            consoantes++;
        }
        i++;
    }

    printf("a frase \"%s\" possui %d vogais e %d consoantes.\n", buffer, vogais, consoantes);

    return 0;
}
