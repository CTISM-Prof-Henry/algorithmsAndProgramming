#include <stdio.h>

#define LENGTH 32

int main() {
    char buffer[LENGTH];
    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);

    int i = 0;
    while(buffer[i] != '\0') {
        i++;
    }
    printf("a frase tem %d caracteres\n", i + 1);

    return 0;
}
