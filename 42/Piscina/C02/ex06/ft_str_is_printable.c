/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:31:43 by brde-car          #+#    #+#             */
/*   Updated: 2026/03/10 22:55:39 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include<stdio.h>
// int	main (void)
// {
// 	printf("%d\n", ft_str_is_printable("haduken"));
// 	printf("%d\n", ft_str_is_printable("haduken\n"));
// 	return (0);
// }