/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecrist <alecrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:49:35 by alecrist          #+#    #+#             */
/*   Updated: 2026/02/28 18:58:19 by alecrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <unistd.h>

void	ft_print_numbers(void)
{
	char numbers = '0';


	while (numbers >= '0' && numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

// int main(void)
// {
// 	ft_print_numbers();
	
// }