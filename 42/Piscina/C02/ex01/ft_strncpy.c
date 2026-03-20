/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 05:28:33 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/17 18:27:42 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main(void)
{
	unsigned int n = 8;
		char	*src = "Testando, 1... 2... 3...";
		char 	dest[40];
		ft_strncpy(dest, src, n);
		printf("%s\n", dest);
		printf("%s\n", src);
		return(0);
}