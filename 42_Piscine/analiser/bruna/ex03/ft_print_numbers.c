/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 14:31:39 by bcampos-          #+#    #+#             */
/*   Updated: 2026/03/10 19:54:01 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = 48;
	while (n < 58)
	{
		write(1, &n, 1);
		n++;
	}
}

// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }