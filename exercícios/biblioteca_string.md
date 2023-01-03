# Exercícios

Para realizar os exercícios abaixo, utilize a biblioteca `string.h` (https://cplusplus.com/reference/cstring/).

1. Crie um algoritmo em C para separar uma frase em palavras, utilizando o caractere ` ` (espaço em branco).

   **Exemplo de saída:**
   
   ```bash
   Separando a string "int a = 0;" em palavras:
   int
   a
   =
   0;
   ```   

2. Crie um algoritmo em C para localizar uma substring em uma string. 

   **Exemplo de saída:**

   ```bash
   keyword: "int"
   buffer: "int a = 0;"

   a primeira ocorrencia de "int" acontece em int a = 0;
   ```

3. Crie um algoritmo em C para comparar duas strings.

   **Exemplo de saída:**
   
   ```bash
   string A: "int"
   string B: "int a = 0;"
   string C: "int"

   strcmp(strA, strB): -32
   strcmp(strB, strA): 32

   strcmp(strC, strB): -32
   strcmp(strB, strC): 32

   strcmp(strC, strA): 0
   strcmp(strA, strC): 0
   ```

## Gabarito

<details>
<summary><b>Questão 1</b></summary>

```C
#include <stdio.h>
#include <string.h>

int main() {
    char str[32] = "int a = 0;";
    char *ptr;
    printf ("Separando a string \"%s\" em palavras:\n", str);
    ptr = strtok(str, " ");
 
    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, " ");
    }
    return 0;
}
```

</details>

<details>
<summary><b>Questão 2</b></summary>
 
```C
#include <stdio.h>
#include <string.h>

int main() {
    char keyword[4] = "int";
    char buffer[32] = "int a = 0;";
 
    printf("keyword: \"%s\"\n", keyword);
    printf("buffer: \"%s\"\n\n", buffer);
 
    char *ptr = strstr(buffer, keyword);
    if(ptr != NULL) {
        printf("a primeira ocorrencia de \"%s\" acontece em \"%s\"\n",   keyword, ptr);    
    } else {
        printf("\"%s\" nao esta contido na string.\n", keyword);    
    }
 
    return 0;
}
```

</details>

<details>
<summary><b>Questão 3</b></summary>

```C
#include <stdio.h>
#include <string.h>

int main() {
    char strA[32] = "int";
    char strB[32] = "int a = 0;";
    char strC[32] = "int";
 
    printf("string A: \"%s\"\n", strA);
    printf("string B: \"%s\"\n", strB);
    printf("string C: \"%s\"\n", strC);
    printf("\n");
    printf("strcmp(strA, strB): %d\n", strcmp(strA, strB));
    printf("strcmp(strB, strA): %d\n", strcmp(strB, strA));
    printf("\n");
    printf("strcmp(strC, strB): %d\n", strcmp(strC, strB));
    printf("strcmp(strB, strC): %d\n", strcmp(strB, strC));
    printf("\n");
    printf("strcmp(strC, strA): %d\n", strcmp(strC, strA));
    printf("strcmp(strA, strC): %d\n", strcmp(strA, strC));
 
    return 0;
}
```

</details>