/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:51:38 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 15:01:04 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	*pfinal;
	int	temp;

	pfinal = tab + size -1;
	while (tab != pfinal && tab < pfinal)
	{
		temp = *tab;
		*tab = *pfinal;
		*pfinal = temp;
		tab++;
		pfinal--;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {4, 3, 2, 3, 6};
	ft_rev_int_tab(tab, 5);
	int	i;

	i = 0;

	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}