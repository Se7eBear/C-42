#include <stdio.h>

int main()
{
    int numero, soma;
    int num = 10;

    printf("Digite um numero inteiro: ");

    scanf("%d", &numero);

    printf("vc digitou o numero: %d\n", numero);

    soma = num + numero;

    printf("a soma entre esse numero digitado e 10: %d\n", soma);

    return 0;

}