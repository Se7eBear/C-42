#include <stdio.h>

/**
 * Estudo de estruturas de controle condicional.
 * Avalia a relação de magnitude entre dois inteiros predefinidos.
 */
int main() {
    int a = 10;
    int b = 11;
    int soma;

    // Lógica de comparação
    if (a < b) {
        soma = a + b;
        printf("Condicao verdadeira: a soma de %d + %d resulta em %d\n", a, b, soma);
    } else {
        // Caso a >= b
        printf("Condicao falsa: o valor de 'a' nao e menor que 'b'.\n");
    }

    return 0;
}