/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 22:52:11 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/28 00:26:35 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		aux;
	size_t				i;

	ptr = (const unsigned char *)s;
	aux = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == aux)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}
