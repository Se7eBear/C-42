/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:32:55 by esulivan          #+#    #+#             */
/*   Updated: 2026/03/01 16:05:04 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}

void	ft_print_reverse_alphabet(void)
{
	char	reverse;

	reverse = 'z';
	while (reverse >= 'a')
	{
		write(1, &reverse, 1);
		reverse--;
	}
}
