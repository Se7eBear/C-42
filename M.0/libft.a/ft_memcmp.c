/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 19:30:57 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/24 10:06:07 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*ptr_char;
	size_t				i;

	ptr = (const unsigned char *)s1;
	ptr_char = (const unsigned char *)s2;
	i = 0;
	while (i < n && ptr[i] == ptr_char[i])
		i++;
	if (i == n)
		return (0);
	return (ptr[i] - ptr_char[i]);
}
