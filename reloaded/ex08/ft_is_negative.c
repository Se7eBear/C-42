/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 13:54:38 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/13 14:41:56 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        ft_putchar('P');
    }
    if (n < 0)
    {
        ft_putchar('N');
    }
}

// int main(void)
// {
//     ft_is_negative(-1);
// }