/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecrist <alecrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:49:54 by alecrist          #+#    #+#             */
/*   Updated: 2026/02/28 18:55:55 by alecrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include <unistd.h>

void	ft_print_alphabet(void)
{
	char alphabet_lowercase = 'a';

	while (alphabet_lowercase >= 'a' && alphabet_lowercase <= 'z')
    
	{
		write (1, &alphabet_lowercase, 1);
		alphabet_lowercase++;
	}
}


// int main()
// {
    
//     ft_print_alphabet();
// }
