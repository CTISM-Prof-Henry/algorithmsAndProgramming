#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("n nao pode ser menor que 1!\n");
        return 1;
    }
    if(n == 1 || n == 2) {
        printf("O numero de Fibonacci e %d\n", 1);
    } else {
        int a = 1;
        int b = 1;
        for(int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        printf("O numero de Fibonacci e %d\n", b);
    }
    return 0;
}