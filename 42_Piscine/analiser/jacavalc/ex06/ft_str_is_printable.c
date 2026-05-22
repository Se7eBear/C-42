/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 11:54:17 by jacavalc          #+#    #+#             */
/*   Updated: 2026/03/17 16:21:35 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] >= 33 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
	char	str[10] = "\n";
	char 	str1[10] = "ajaj";

	printf("Retorna: %d\n", ft_str_is_printable(str));
	printf("Retorna: %d", ft_str_is_printable(str1));
	return (0);
}