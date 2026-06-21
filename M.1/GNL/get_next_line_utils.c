/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:58:40 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/21 02:30:43 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchar(const char *s, int c)
{
	unsigned char	aux;
	int				i;

	if (!s)
		return (NULL);
	aux = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == aux)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (aux == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	i;
	int	len;
	int	src_len;

	len = 0;
	i = 0;
	src_len = 0;
	while (dst[len] != '\0' && len < size)
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

int	ft_strlcpy(char *dst, const char *src, int size)
{
	int	i;
	int	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*str;

	if (!s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	if (s1)
		ft_strlcpy(str, s1, len1 + 1);
	else
		str[0] = '\0';
	ft_strlcat(str, s2, len1 + len2 + 1);
	return (str);
}
