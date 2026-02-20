#include <stdio.h>

int main() {
    int numero = 42;
    
    // Mostrando o VALOR da variável
    printf("O valor da variavel e: %d\n", numero);
    
    // Mostrando o ENDERECO da variável (onde ela mora na memória)
    // Usamos o & para "extrair" esse endereço
    printf("O endereco de memoria dela (&numero) e: %p\n", &numero);
    
    return 0;
}