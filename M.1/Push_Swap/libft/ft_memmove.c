/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 03:51:46 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/28 00:34:39 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr_d;
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_s = (unsigned char *)src;
	ptr_d = (unsigned char *)dest;
	if (ptr_d < ptr_s)
	{
		i = 0;
		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	else if (ptr_d > ptr_s)
	{
		while (n > 0)
		{
			n--;
			ptr_d[n] = ptr_s[n];
		}
	}
	return (dest);
}
