/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecrist <alecrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:49:45 by alecrist          #+#    #+#             */
/*   Updated: 2026/02/28 18:56:59 by alecrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alphabet_lowercase = 'z';

	while (alphabet_lowercase <= 'z' && alphabet_lowercase >= 'a')
	{
		write (1, &alphabet_lowercase, 1);
		alphabet_lowercase--;
	}
}


// int main()
// {
    
//  ft_print_reverse_alphabet();
// }
