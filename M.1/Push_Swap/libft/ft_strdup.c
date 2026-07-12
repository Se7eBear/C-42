/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:12:23 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/04 21:15:02 by brde-car         ###   ########.fr       */
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
