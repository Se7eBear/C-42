#include <stdio.h>

/**
 * Estudo de entrada de dados e aritmética básica.
 * Demonstra o uso de scanf para captura de input e processamento de soma.
 */
int main() {
    int numero_usuario;
    int constante = 10;
    int resultado;

    printf("Digite um numero inteiro: ");
    
    // Captura de entrada com validação de endereço (&)
    if (scanf("%d", &numero_usuario) != 1) {
        printf("Erro: Entrada invalida.\n");
        return 1;
    }

    printf("Voce digitou o numero: %d\n", numero_usuario);

    // Processamento aritmético
    resultado = constante + numero_usuario;

    printf("A soma entre o numero digitado e %d e: %d\n", constante, resultado);

    return 0;
}