#include <stdio.h>

// descomente a linha abaixo para forçar o padding em 1 byte
// #pragma pack(1)

struct S1 {
    char c;  // 1 byte
    int i[2];  // 2 * 4 = 8 bytes
    double v;  // 8 bytes
};  // total não-alinhado: 17 bytes

struct S2 {
    double v;  // 8 bytes
    int i[2];  // 2 * 4 = 8 bytes
    char c;  // 1 byte
};  // total não-alinhado: 17 bytes

int main() {
    printf("sizeof(S1): %d bytes\n", (int)sizeof(struct S1));
    printf("sizeof(S2): %d bytes\n", (int)sizeof(struct S2));

    return 0;
}
