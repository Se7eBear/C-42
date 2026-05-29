/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:12:23 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/28 21:47:40 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*i;
	size_t	aux;

	aux = ft_strlen(s);
	i = (char *)malloc(aux + 1);
	if (i == NULL)
		return (NULL);
	ft_strlcpy(i, s, aux + 1);
	return (i);
}
