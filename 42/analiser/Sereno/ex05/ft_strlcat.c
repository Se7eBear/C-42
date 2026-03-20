/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:54:48 by smachado          #+#    #+#             */
/*   Updated: 2026/03/06 18:28:36 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *ptr)
{
	unsigned int	len;

	len = 0;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	if (size <= 0)
		return (src_size);
	if (size <= dest_size)
		return (size + src_size);
	while (src[i] && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}

// #include<stdio.h>
// int main(void)
// {
//     char dest[50] = "Hello, ";
//     char src[] = "World!";

//     ft_strlcat(dest, src, 20);

//     printf("%s\n", dest);

//     return 0;
// }