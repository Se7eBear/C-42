/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 17:14:54 by bcampos-          #+#    #+#             */
/*   Updated: 2026/03/10 19:50:41 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void)
{	
	char	alphabet_lowercase;

	alphabet_lowercase = 'a';
	while (alphabet_lowercase >= 'a' && alphabet_lowercase <= 'z')
	{
		write(1, &alphabet_lowercase, 1);
		alphabet_lowercase++;
	}
}

// int main(void)
// {
// 	ft_print_alphabet();
// 	return(0);
// }