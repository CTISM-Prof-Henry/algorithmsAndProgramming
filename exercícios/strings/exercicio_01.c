#include <stdio.h>

#define LENGTH 10

int main() {
    char buffer[LENGTH];
    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);

    return 0;
}
