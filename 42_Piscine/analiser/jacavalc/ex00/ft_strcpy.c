/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:47:32 by jacavalc          #+#    #+#             */
/*   Updated: 2026/03/17 16:14:26 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

//  void	ft_putstr(char *str)
// {
// 	int		i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_putchar(str[i]);
// 		i++;
// 	}
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include<stdio.h>
#include <unistd.h>
int	main(void)
{
	char	*src = "arroz";
	char	dest[20];

	// ft_putstr("Origem:");
	// ft_putstr(src);
	// ft_putstr("Destino:");
	// ft_putstr(dest);
	// ft_strcpy(dest, src);
	// ft_putstr("Novo valor do destino:");
	// ft_putstr(dest);
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	printf("%s\n", src);
	return(0);
}
