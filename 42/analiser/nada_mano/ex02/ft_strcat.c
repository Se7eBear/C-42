/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:45:32 by nada-sil          #+#    #+#             */
/*   Updated: 2026/03/11 03:35:55 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
int main(void)
{
	char array1[] = "carro";
	char array2[20] = "paodadafe";
	printf("juntando os dois: %s", ft_strcat(array1, array2));
	return (0);
}