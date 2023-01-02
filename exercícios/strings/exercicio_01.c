#include <stdio.h>

int main() {
    char buffer[10];
    printf("digite uma frase: ");
    fgets(buffer, sizeof buffer, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);

    return 0;
}
