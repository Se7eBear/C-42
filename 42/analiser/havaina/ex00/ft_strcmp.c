/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:04:30 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/13 16:23:11 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
	}
	return (s1[index] - s2[index]);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "SAMBA";
// 	char str2[] = "SAMBa";
// 	char str3[] = "SAMBA!";
// 	char str4[] = "SAMBA muito foda ne mano";
// 	char str5[] = "SAMBA muito bosta ne mano";

// 	printf("(%d) <-\n", ft_strcmp(str1, str1));
// 	printf("(%d) <-\n", strcmp(str1, str1));
// 	//!
// 	printf("(%d) <-\n", ft_strcmp(str1, str2));
// 	printf("(%d) <-\n", strcmp(str1, str2));
// 	//!
// 	printf("(%d) <-\n", ft_strcmp(str1, str3));
// 	printf("(%d) <-\n", strcmp(str1, str3));
// 	//!
// 	printf("(%d) <-\n", ft_strcmp(str4, str4));
// 	printf("(%d) <-\n", strcmp(str4, str4));
// 	//!
// 	printf("(%d) <-\n", ft_strcmp(str4, str5));
// 	printf("(%d) <-\n", strcmp(str4, str5));
// }