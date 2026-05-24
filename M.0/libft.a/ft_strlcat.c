/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 21:54:03 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/24 10:10:05 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	src_len;

	len = 0;
	i = 0;
	src_len = 0;
	while (dst[len] != '\0')
		len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= len)
		return (size + src_len);
	while (src[i] != '\0' && (len + i) < (size - 1))
	{
		dst[len + i] = src[i];
		i++;
	}
	dst[len + i] = '\0';
	return (len + src_len);
}
