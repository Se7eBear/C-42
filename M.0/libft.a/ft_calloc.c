/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:12:16 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/28 21:31:57 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*i;
	size_t	j;

	j = nmemb * size;
	i = malloc(j);
	if (i == NULL)
		return (NULL);
	ft_bzero(i, j);
	return (i);
}
