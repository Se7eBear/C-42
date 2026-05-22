/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:04:30 by hvaini-d          #+#    #+#             */
/*   Updated: 2026/03/13 16:28:35 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				response;

	i = 0;
	response = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		response = s1[i] - s2[i];
		if (response == 0)
			i++;
		else
			return (response);
	}
	return (response);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char str1[] = "SAMBA";
// 	char str2[] = "SaMBa";
// 	char str3[] = "SaMBA!";
// 	char str4[] = "SAmBA muito foda ne mano";
// 	char str5[] = "SAPBA muito bosta ne mano";
// 	printf("(%d) <-\n", ft_strncmp(str1, str1, 3));
// 	printf("(%d) <-\n", strncmp(str1, str1, 3));
// 	//!
// 	printf("(%d) <-\n", ft_strncmp(str1, str2, 3));
// 	printf("(%d) <-\n", strncmp(str1, str2, 3));
// 	//!
// 	printf("(%d) <-\n", ft_strncmp(str1, str3, 3));
// 	printf("(%d) <-\n", strncmp(str1, str3, 3));
// 	//!
// 	printf("(%d) <-\n", ft_strncmp(str4, str4, 3));
// 	printf("(%d) <-\n", strncmp(str4, str4, 3));
// 	//!
// 	printf("(%d) <-\n", ft_strncmp(str4, str5, 3));
// 	printf("(%d) <-\n", strncmp(str4, str5, 3));
// }
