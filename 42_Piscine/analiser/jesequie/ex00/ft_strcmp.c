/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 18:39:36 by jesequie          #+#    #+#             */
/*   Updated: 2026/03/12 14:30:00 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		if (s1[i] > s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// A função
// strcmp (string compare) é uma função padrão da linguagem C, 
// definida em <string.h>, utilizada para comparar 
// duas strings lexicograficamente (ordem alfabética/ASCII). 
// Ela retorna um inteiro: 0 se forem iguais, um valor 
// negativo se a primeira for menor que a segunda, ou positivo se for maior.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char *nome ="hello";
// 	char *pronome = "hell0";
// 	printf("O meu ft_strcmp: ");
// 	printf("%d\n",ft_strcmp(nome,pronome));
// 	printf(" strcmp Original: ");
// 	printf("%d\n",strcmp(nome,pronome));

// }