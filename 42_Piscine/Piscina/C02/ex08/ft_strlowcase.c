/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:21:53 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/15 07:47:50 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// #include<stdio.h>
// int	main(void)
// {
// 	char string[6] = "HELLO";
// 	char string2[6] = "helLo";
// 	printf("%s\n", ft_strlowcase(string));
// 	printf("%s\n", ft_strlowcase(string2));
// }