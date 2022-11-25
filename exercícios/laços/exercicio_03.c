#include <stdio.h>

int main() {
    int a, b;
    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    printf("y = %dx + %d\n", a, b);
    for(int x = 1; x <= 10; x++) {
        printf("f(%d) = %d\n", x, a * x + b);
    }
    return 0;
}