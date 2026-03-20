/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rviniciu <rviniciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 19:54:20 by rviniciu          #+#    #+#             */
/*   Updated: 2026/03/07 17:54:17 by rviniciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
		++i;
	k = 0;
	while (src[k] != '\0')
		++k;
	k += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (k);
}

// int main(void)
// {
//   char s1[] = "teste minha 42";
//   char s2[] = "42";
//   printf("Antes: %s\n", s2);
//   unsigned int ret = ft_strlcat(s2, s1, 5);
//   printf("Depois: %s\n", s2);
// }
