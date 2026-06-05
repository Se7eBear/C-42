/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 23:40:32 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/02 03:34:12 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	aux;
	int				i;

	aux = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == aux)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == aux)
		return ((char *)&s[i]);
	return (NULL);
}
