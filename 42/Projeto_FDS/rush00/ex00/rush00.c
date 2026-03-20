/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 14:10:01 by agde-mir          #+#    #+#             */
/*   Updated: 2026/03/01 20:35:42 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	rush(int x, int y)
{
	int	pc;
	int	pl;

	if (x <= 0 || y <= 0)
		return ;
	pl = 0;
	while (pl < y)
	{
		pc = 0;
		while (pc < x)
		{
			if ((pl == 0 || pl == y -1) && (pc == 0 || pc == x -1))
				ft_putchar('o');
			else if (((pl != 0 || pl != y -1) && pc == 0) || pc == x -1)
				ft_putchar('|');
			else if (pc != 0 && pc != x -1 && pl != 0 && pl != y -1)
				ft_putchar(' ');
			else
				ft_putchar('-');
			pc++;
		}
		ft_putchar('\n');
		pl++;
	}
}
