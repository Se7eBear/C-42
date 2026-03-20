/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wgolbert <wgolbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 17:48:47 by wgolbert          #+#    #+#             */
/*   Updated: 2026/03/01 18:57:41 by wgolbert         ###   ########.fr       */
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
			if (pc == 0 && (pl == 0 || pl == y -1))
				ft_putchar('A');
			else if (pc == x -1 && (pl == 0 || pl == y -1))
				ft_putchar('C');
			else if (pc != 0 && pc != x -1 && pl != 0 && pl != y -1)
				ft_putchar(' ');
			else
				ft_putchar('B');
			pc++;
		}
		ft_putchar('\n');
		pl++;
	}
}
