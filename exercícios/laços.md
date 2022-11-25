# Laços de Repetição

O gabarito das questões está [aqui](laços).

1. Escreva um código-fonte que imprime a [sequência de Fibonacci](https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci) 
   do primeiro até o `n`-ésimo número, onde `n` é lido do teclado. Lembrando que o primeiro número de Fibonacci é 1,
   o segundo número de Fibonacci é 1, e todos os números subsequentes são a soma dos dois números de Fibonacci 
   imediatamente anteriores.
    * Primeiros 10 números de Fibonacci: `1, 1, 2, 3, 5, 8, 13, 21, 34, 55`
    * Mais informações no [WolframAlpha](https://www.wolframalpha.com/input/?i=first+10+fibonacci+numbers)
2. Escreva um código-fonte que, dado um número  `n`, lido do teclado, calcula o fatorial `n!`.
    * Exemplo \#1: `1! = 1`
    * Exemplo \#2: `2! = 2 * 1 = 2`
    * Exemplo \#3: `3! = 3 * 2 * 1 = 6`
    * Exemplo \#4: `10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800`
    * Mais informações no [WolframAlpha](https://www.wolframalpha.com/input/?i=5%21)
3. Escreva um código-fonte que, dado dois números por `a` e `b`, lidos por teclado, arranje-os em uma função polinomial 
   de primeiro grau (função afim) `y = ax + b`, e retorne os 10 valores de `y` para os seguintes 10 valores de x: 
   `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`.
   * Exemplo: `a = 1` e `b = -2`
   * Saída da função: `-2, -1, 0, 1, 2, 3, 4, 5, 6, 7`
4. Escreva um código-fonte que, dado um número `n`, lido por teclado, retorna a `n`-ésima letra do alfabeto.
    * Exemplo \#1: `n = 1` Saída: `a`
    * Exemplo \#2: `n = 26` Saída: `z`
    * Dica: [Tabela ASCII](https://pt.wikipedia.org/wiki/ASCII)
5. Escreva um código-fonte que, dado um número `n`, lido pelo teclado, preenche uma matriz `nxn`, onde o triângulo 
   inferior é composto de 1s, e o triângulo superior de zeros.
   * Saída para `n = 5`:
    ```
    1 0 0 0 0
    1 1 0 0 0
    1 1 1 0 0
    1 1 1 1 0
    1 1 1 1 1
    ```