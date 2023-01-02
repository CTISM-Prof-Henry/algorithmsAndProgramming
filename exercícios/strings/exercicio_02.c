#include <stdio.h>

int main() {
    char buffer[32];
    printf("digite uma frase: ");
    fgets(buffer, sizeof buffer, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);

    int i = 0;
    while(buffer[i] != '\0') {
        i++;
    }
    printf("a frase tem %d caracteres\n", i + 1);

    return 0;
}
