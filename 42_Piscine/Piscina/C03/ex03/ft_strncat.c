/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:20:26 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/15 00:27:04 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include<stdio.h>

// int main(int argc, char **argv)
// {
// 	unsigned int n;

// 	n = 8;
// 	if (argc == 3)
// 	{
// 		printf("%s\n", ft_strncat (argv[1], argv[2], n));
// 	}
// 	else
// 	{
// 		printf("coloca a entrada certa. la ele.");
// 	}
// }
