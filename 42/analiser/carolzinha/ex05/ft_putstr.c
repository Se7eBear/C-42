/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:43:54 by ctalia-g          #+#    #+#             */
/*   Updated: 2026/03/12 15:39:14 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	main (void)
{
	char	phase[] = "Raposo, não pegue!";
	ft_putstr(phase);
	return (0);
}