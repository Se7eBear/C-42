/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 20:12:17 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/02 00:31:01 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	aloc;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		aloc = 0;
	else if (len > s_len - start)
		aloc = s_len - start;
	else
		aloc = len;
	str = malloc(sizeof (char) * (aloc + 1));
	if (!str)
		return (NULL);
	if (aloc > 0)
		ft_strlcpy(str, s + start, aloc + 1);
	else
		str[0] = '\0';
	return (str);
}
