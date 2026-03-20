/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:58:23 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/10 18:45:51 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string[5] = "hello";
// 	char string2[6] = "hellO";
// 	printf("%s\n", ft_strupcase(string));
// 	printf("%s\n", ft_strupcase(string2));
// }