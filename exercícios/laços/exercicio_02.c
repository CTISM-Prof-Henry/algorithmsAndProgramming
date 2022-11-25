#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Este algoritmo ainda nao resolve fatoriais negativos!\n");
        return 1;
    }
    if(n == 0) {
        printf("0! = %d\n", 1);
    } else {
        int prod = 1;
        for(int i = 1; i <= n; i++) {
            prod = prod * i;
        }
        printf("%d! = %d\n", n, prod);
    }

    return 0;
}