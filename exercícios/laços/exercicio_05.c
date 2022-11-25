#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n < 1) {
        printf("n deve ser maior que 1!\n");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            printf("%d ", 1);
        }
        for(int j = i + 1; j < n; j++) {
            printf("%d ", 0);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}