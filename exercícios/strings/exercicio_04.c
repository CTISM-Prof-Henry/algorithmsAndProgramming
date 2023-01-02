#include <stdio.h>

#define LENGTH 32

int main() {
    char buffer[LENGTH];
    printf("digite uma frase: ");
    fgets(buffer, LENGTH, stdin);

    printf("a frase digitada foi:\n");
    printf("%s\n", buffer);
    printf("a frase na ordem inversa e:\n");

    int i = 0;
    while(buffer[i] != '\0') {
        i++;
    }
    for(int j = i; j >= 0; j--) {
        printf("%c", buffer[j]);
    }

    return 0;
}

