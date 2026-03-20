/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:51:59 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/12 14:35:11 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (n > 0 && s1[i] != '\0' && s1[i] == s2[i])
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// A função
// strncmp em C/C++ compara até
// caracteres de duas strings e retorna um valor inteiro: 0 se as 
//strings forem iguais (dentro do limite), um valor positivo 
// se o primeiro caractere diferente da primeira string 
//for maior (ASCII) que o da segunda, e um valor negativo se for menor.
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char *nome = "aoab";
// 	char *pronome = "joab";
// 	printf("Minha ft_strncmp: ");
// 	printf("%d\n",ft_strncmp(nome,pronome,4));
// 	printf("Original strncmp: ");
// 	printf("%d\n",strncmp(nome,pronome,4));
// }
