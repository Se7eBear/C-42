#include "ft_printf.h"
#include <stdio.h> // Para usar o printf original e comparar

int main(void)
{
    int             ret_ft;
    int             ret_og;
    
    unsigned int    u = 4294967295; // Testando o limite do unsigned
    int             d = -42;
    char            *str = "Mundo";
    char            c = 'A';
    unsigned int    hex = 255;
    void            *ptr = &d; // Endereço de memória para o %p

    printf("=== TESTANDO CONVERSÕES ===\n");

    // Teste 1: Strings e Chars
    ft_printf("ft_printf : Olá %s! Letra: %c\n", str, c);
    printf("printf_og : Olá %s! Letra: %c\n\n", str, c);

    // Teste 2: Números e Unsigned
    ft_printf("ft_printf : Numero: %d | Unsigned: %u\n", d, u);
    printf("printf_og : Numero: %d | Unsigned: %u\n\n", d, u);

    // Teste 3: Hexadecimal
    ft_printf("ft_printf : Hex min: %x | Hex maius: %X\n", hex, hex);
    printf("printf_og : Hex min: %x | Hex maius: %X\n\n", hex, hex);

    // Teste 4: Ponteiro e Porcentagem
    ft_printf("ft_printf : Ponteiro: %p | Porcento: %%\n", ptr);
    printf("printf_og : Ponteiro: %p | Porcento: %%\n\n", ptr);

    printf("=== TESTANDO RETORNO DE CONTAGEM ===\n");
    
    ret_ft = ft_printf("Tamanho dessa string é...\n");
    ret_og = printf("Tamanho dessa string é...\n");
    
    printf("\nRetorno ft_printf: %d\n", ret_ft);
    printf("Retorno original: %d\n", ret_og);

    return (0);
}