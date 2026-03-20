/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:09:11 by calexsan          #+#    #+#             */
/*   Updated: 2026/03/12 15:01:57 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	count2;

	count = 0;
	while (count < size)
	{
		count2 = 0;
		while (count2 < size -1)
		{
			if (tab[count2] > tab[count2 + 1])
			{					
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab[count2 + 1] = temp;
			}
			count2++;
		}
		count ++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {3, 2, 1, 4, 7, 12};

	ft_sort_int_tab(tab, 6);
	int	i;

	i = 0;

	while (i < 6)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}