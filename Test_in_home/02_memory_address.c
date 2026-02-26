#include <stdio.h>

/**
 * Exploração de endereçamento de memória no Linux.
 * Uso do formatador %p para representação hexadecimal de endereços.
 */
int main() {
    int numero = 42;

    printf("Valor da variável: %d\n", numero);
    printf("Endereço de memória (Stack): %p\n", (void *)&numero);

    return 0;
}