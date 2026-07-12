/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 18:40:51 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 21:54:26 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_nb_bits(int n)
{
	int	nb_bits;

	nb_bits = 0;
	while ((1 << nb_bits) < n)
		nb_bits++;
	return (nb_bits);
}

void	radix_sort(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	int	nb_bits;
	int	bit;
	int	size;
	int	i;

	if (!a_lst || !*a_lst || !b_lst)
		return ;
	nb_bits = get_nb_bits(ft_lstsize(*a_lst));
	bit = 0;
	while (bit < nb_bits)
	{
		size = ft_lstsize(*a_lst);
		i = 0;
		while (i < size)
		{
			if (((*a_lst)->index >> bit) & 1)
				ra(a_lst, op_lst);
			else
				pb(a_lst, b_lst, op_lst);
			i++;
		}
		while (*b_lst)
			pa(a_lst, b_lst, op_lst);
		bit++;
	}
}
