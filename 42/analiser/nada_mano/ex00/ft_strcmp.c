/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 17:29:39 by nada-sil          #+#    #+#             */
/*   Updated: 2026/03/11 03:34:59 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
	char array1[] = "caa";
	char array2[] = "caa";
	printf("a array e: %d\n ", ft_strcmp(array1, array2));
	return (0);
}