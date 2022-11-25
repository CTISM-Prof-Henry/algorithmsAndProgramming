#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n < 1 || n > 26) {
        printf("n deve estar entre 1 e 26!\n");
        return 1;
    }
    printf("o %d numero do alfabeto e %c\n", n, 97 + (n - 1));

    return 0;
}