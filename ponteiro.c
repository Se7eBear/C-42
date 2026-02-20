#include <stdio.h>

int main() {
    int idade = 25;
    int *ptr;
    
    ptr = &idade;
    
    printf("valor da idade: %d\n", idade);
    printf("endereco da idade: %d\n", &idade);

    printf("\n--- usando o ponteiro ---\n");
    printf("Conteudo do ponteiro (o endereco): %p\n", ptr);

    printf("Valor para o qual o ponteiro aponta: %d\n", *ptr);
}