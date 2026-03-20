/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 00:00:00 by guilhmar          #+#    #+#             */
/*   Updated: 2026/03/17 17:37:12 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len ;

	len = 0;
	while (*str)
	{
		len++ ;
		str++ ;
	}
	return (len);
}
int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
 *	ft_strlcat
 *
 *  # Man
 *	
 *	Copy and concatenate the input string into a destination
 *	string.  If the destination buffer, limited by its size,
 *	isn't large enough to hold the copy, the resulting string
 *	is truncated (but it is guaranteed to be null-terminated).
 *	They return the length of the total string they tried to
 *	create.
 * 
 *	# About
 *
 *	Append the src string to dest, but append at most size - strlen(dest) - 1
 * 	bytes, null-terminating the result.
 *
 *	The strlcat() function takes the full size of the destination buffer and
 *	guarantees null-termination if there is room. Note that room for the
 *	null-terminator should be included in size.
 *
 *	The function returns the total length of the string it tried to create;
 *	that means the initial length of dest plus the length of src. If the
 *	return value is >= size, the output string has been truncated.
 *
 *	# Example
 *
 *  ```c
 *	int	main (void)
 *	{
 *		char	dest[20] = "hello, ";
 *
 *		ft_strlcat(dest, "world!", 20);
 *		if (dest != "hello, world!")
 *			return (1);
 *		return (0);
 *	}
 *  ```
 *
 *	@param[dest]:	`char *`		pointer to `dest` string;
 *	@param[src]:	`char *`		pointer to `src` string;
 *	@param[size]:	`unsigned int`	total size of the dest buffer;
 *	@return[unsigned int]
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = (unsigned int)ft_strlen(dest);
	src_len = (unsigned int)ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	dest += dest_len;
	i = 0;
	while (*src && i < size - dest_len - 1)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}

#include<stdio.h>
int	main (void)
 	{
 		char	dest[13] = "hello, ";
 		ft_strlcat(dest, "world!", 13);
 		printf("%s\n", dest);
 		return (0);
 }