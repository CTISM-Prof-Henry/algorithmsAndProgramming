#include <stdio.h>

int main() {
    char buffer[32];
    printf("digite uma frase: ");
    fgets(buffer, sizeof buffer, stdin);

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

