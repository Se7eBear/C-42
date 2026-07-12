/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selection_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 21:07:06 by smachado          #+#    #+#             */
/*   Updated: 2026/07/05 16:17:41 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_position(t_list *lst)
{
	int	current_index;
	int	min_index;
	int	min_val;
	int	current_val;

	if (!lst)
		return (0);
	current_index = 0;
	min_index = 0;
	min_val = *(int *)(lst->content);
	while (lst != NULL)
	{
		current_val = *(int *)(lst->content);
		if (current_val < min_val)
		{
			min_val = current_val;
			min_index = current_index;
		}
		lst = lst->next;
		current_index++;
	}
	return (min_index);
}

void	ft_selection_sort(t_list **al, t_list **bl, int size, t_list **opl)
{
	int	i;
	int	min_p;

	while (size > 0)
	{
		min_p = min_position(*al);
		if (min_p <= size / 2)
		{
			i = 0;
			while (i++ < min_p)
				ra(al, opl);
		}
		else
		{
			i = 0;
			while (i++ < size - min_p)
				rra(al, opl);
		}
		pb(al, bl, opl);
		size--;
	}
	while (*bl)
		pa(al, bl, opl);
}
