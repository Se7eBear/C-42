/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gussilva <gussilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 14:21:55 by gussilva          #+#    #+#             */
/*   Updated: 2026/02/27 15:34:49 by gussilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nm;

	nm = '0';
	while (nm <= '9')
	{
		write(1, &nm, 1);
		nm++;
	}
}
// int main(void)
// {
//     ft_print_numbers();
//     return (0);
// }