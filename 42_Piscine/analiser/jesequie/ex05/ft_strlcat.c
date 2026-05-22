/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 12:03:16 by lusampai          #+#    #+#             */
/*   Updated: 2026/03/12 14:46:07 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ci;
	unsigned int	cj;

	i = 0;
	j = 0;
	ci = 0;
	cj = 0;
	while (dest[ci] != '\0')
		ci++;
	while (src[cj] != '\0')
		cj++;
	i = ci;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if ((unsigned int)i >= size)
		return ((cj + size));
	dest[i] = '\0';
	return (ci + cj);
}

#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
int main ()
{
    char nome [40] = "123";
	char nome_or [40] = "123";
    char sobrenome [] = "abcdef123";
	char sobrenome_or [] = "abcdef123";
    printf("tamanho do array de caracteres retornado: ");
    printf("%u\n",ft_strlcat(nome,sobrenome,40));
    printf("array de caracteres retornado: ");
    printf("original: strlcat: ");
    printf("%zu",strlcat(nome_or,sobrenome_or,40));
}
