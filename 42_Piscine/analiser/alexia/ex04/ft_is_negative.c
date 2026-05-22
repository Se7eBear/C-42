/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecrist <alecrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:49:25 by alecrist          #+#    #+#             */
/*   Updated: 2026/02/28 19:00:44 by alecrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include <unistd.h>



void	ft_is_negative(int n)

{
	char positivo = 'P';     
	char negativo = 'N';

	
	if (n < 0)

	{
		write(1, &negativo, 1);
	}
	else
		write(1, &positivo, 1);
}

// int main (void)
// {
	
// 	ft_is_negative(-1);
// 	ft_is_negative(1);
// 	ft_is_negative(-5);
//     ft_is_negative(-1);


// }