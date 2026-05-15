#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	test_header(char *title)
{
	printf("\n--- %s ---\n", title);
}

int	main(void)
{
	// Testes de Classificação (Is)
	test_header("TESTES DE CLASSIFICACAO");
	int test_chars[] = {'A', 'z', '5', ' ', '@', 127, 0};
	for (int i = 0; test_chars[i]; i++)
	{
		printf("Char: '%c' | ft_isalpha: %d vs %d\n", test_chars[i], ft_isalpha(test_chars[i]), isalpha(test_chars[i]));
		printf("Char: '%c' | ft_isdigit: %d vs %d\n", test_chars[i], ft_isdigit(test_chars[i]), isdigit(test_chars[i]));
		printf("Char: '%c' | ft_isalnum: %d vs %d\n", test_chars[i], ft_isalnum(test_chars[i]), isalnum(test_chars[i]));
		printf("Char: '%c' | ft_isascii: %d vs %d\n", test_chars[i], ft_isascii(test_chars[i]), isascii(test_chars[i]));
		printf("Char: '%c' | ft_isprint: %d vs %d\n", test_chars[i], ft_isprint(test_chars[i]), isprint(test_chars[i]));
		printf("----------------------------\n");
	}

	// Teste de Strlen
	test_header("TESTE FT_STRLEN");
	char *str = "42 Sao Paulo";
	printf("String: \"%s\"\n", str);
	printf("ft_strlen: %zu | original: %zu\n", ft_strlen(str), strlen(str));

	// Teste de Strncmp
	test_header("TESTE FT_STRNCMP");
	char *s1 = "abcdef";
	char *s2 = "abcdeg";
	printf("S1: \"%s\", S2: \"%s\", n=5\n", s1, s2);
	printf("ft_strncmp: %d | original: %d\n", ft_strncmp(s1, s2, 5), strncmp(s1, s2, 5));
	printf("S1: \"%s\", S2: \"%s\", n=6\n", s1, s2);
	printf("ft_strncmp: %d | original: %d\n", ft_strncmp(s1, s2, 6), strncmp(s1, s2, 6));

	// Teste de Atoi
	test_header("TESTE FT_ATOI");
	char *num1 = "   -1234ab567";
	char *num2 = "2147483647";
	char *num3 = "  +42";
	printf("Str: \"%s\" | ft_atoi: %d | original: %d\n", num1, ft_atoi(num1), atoi(num1));
	printf("Str: \"%s\" | ft_atoi: %d | original: %d\n", num2, ft_atoi(num2), atoi(num2));
	printf("Str: \"%s\" | ft_atoi: %d | original: %d\n", num3, ft_atoi(num3), atoi(num3));

	return (0);
}