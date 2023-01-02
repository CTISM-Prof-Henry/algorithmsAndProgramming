# Strings em C

## Caracteres

* São letras
* Usam o tipo `char`
    * Mapeia para a tabela [ASCII](https://pt.wikipedia.org/wiki/ASCII)
    * Tipo `char` possui 1 byte, 2^8 = 256 caracteres disponíveis
    * Cada caractere possui um número (código) na tabela
* Por que não usaram outros tipos de dados? (e.g. `int`)
    * 256 caracteres era bom o suficiente para a língua inglesa
    * Foi preciso criar outras codificações (e.g. [UTF-8](https://pt.wikipedia.org/wiki/UTF-8)) para acentuação, letras de outros alfabetos, etc
* Definidos com 'apóstrofes'
  ```C
  char letra = 'a';
  ```

## Strings

* São cadeias de caracteres
* Codificados como vetores na linguagem C
* Usam o tipo `char`
* Terminam com o caractere `\0`
    * Esquecer esse caractere no fim da string pode dar problemas!
    * Maioria dos métodos de alocação de strings já coloca o caractere automaticamente (e.g.  `fgets`)
* Lidos com `fgets`  (biblioteca `stdio`) a partir do teclado
* Não usar `gets` nem `scanf`!
  ```C
  #include <stdio.h> 
        
  int main() {
      char buffer[5];
      printf("digite um texto:\n");
      // o texto a ser digitado será
      // "o rato roeu a roupa do rei de roma"
      fgets(buffer, sizeof buffer, stdin);  // funciona, lê até "o ra"
  
      gets(buffer);                         // não funciona: programa dá crash pois  
                                            // escreveu além da memória alocada
  
      scanf("%s", &buffer[0]);              // não funciona: lê até "o" (considera 
                                            // espaço em branco como terminador)
      return 0;
      }
    ```
* Definidos com "aspas"
   ```C
   char frase[11] = "ola mundo!";
   ```

## Recursos adicionais

* [Biblioteca string.h no C++ Reference](https://cplusplus.com/reference/cstring/) (em inglês)
* [Função fgets no C++ Reference](https://cplusplus.com/reference/cstdio/fgets/) (em inglês)
