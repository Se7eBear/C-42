/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:50:36 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/13 13:50:37 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{   
    char letter;

    letter = 'a';
    while (letter >= 'a' && letter <= 'z')
    {
        ft_putchar(letter);
        letter++;
    }
    ft_putchar('\n');
}

// int main(void)
// {
//     ft_print_alphabet();
// }