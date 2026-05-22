/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 18:47:48 by nada-sil          #+#    #+#             */
/*   Updated: 2026/03/11 03:35:23 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		{
			if (s1[i] != s2[i])
			{
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			}
		}
		i++;
	}
	return (0);
}
int main(void)
{
	char array1[] = "carro";
	char array2[] = "carro";
	char array3[] = "carrz";
	char array4[] = "carro";
	char array5[] = "car";
	char array6[] = "carro";
	char array7[] = "carroftyfg";
	char array8[] = "carro";
		unsigned int limite = 4;
	printf("a array e: %d\n ", ft_strncmp(array1, array2, limite));
	printf("a array e: %d\n ", ft_strncmp(array3, array4, limite));
	printf("a array e: %d\n", ft_strncmp(array5, array6, limite));
	printf("a array e: %d\n ", ft_strncmp(array7, array8, limite));
	return (0);
}