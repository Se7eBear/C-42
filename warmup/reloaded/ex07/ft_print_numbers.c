/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:50:28 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/13 13:54:03 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char nb;

    nb = '0';
    while (nb >= '0' && nb <= '9')
    {
        ft_putchar(nb);
        nb++;
    }
    ft_putchar('\n');
}

// int main(void)
// {
//     ft_print_numbers();
// }