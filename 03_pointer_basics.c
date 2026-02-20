#include <stdio.h>

/**
 * Estudo de ponteiros e desreferenciação.
 * Demonstra a atribuição de endereços e acesso ao valor via ponteiro.
 */
int main() {
    int idade = 25;
    int *ptr;

    ptr = &idade; // Atribuição do endereço de memória

    printf("Valor original: %d\n", idade);
    printf("Endereço via operador &: %p\n", (void *)&idade);

    printf("\n--- Manipulação via Ponteiro ---\n");
    printf("Conteúdo do ponteiro (endereço armazenado): %p\n", (void *)ptr);
    printf("Valor acessado via desreferenciação (*ptr): %d\n", *ptr);

    return 0;
}