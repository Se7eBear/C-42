/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 10:29:16 by smachado          #+#    #+#             */
/*   Updated: 2026/07/05 16:57:25 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (i - 1);
}

static int	find_largest_pos(t_list *b_lst)
{
	t_list	*tmp;
	int		largest;
	int		pos;
	int		i;

	tmp = b_lst;
	largest = tmp->index;
	pos = 0;
	i = 0;
	while (tmp)
	{
		if (tmp->index > largest)
		{
			largest = tmp->index;
			pos = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (pos);
}

static void	move_to_top_largest_in_b(t_list **b_lst, t_list **op_lst)
{
	int	pos;
	int	size;

	if (!b_lst || !*b_lst)
		return ;
	size = ft_lstsize(*b_lst);
	pos = find_largest_pos(*b_lst);
	if (pos <= size / 2)
	{
		while (pos-- > 0)
			rb(b_lst, op_lst);
	}
	else
	{
		pos = size - pos;
		while (pos-- > 0)
			rrb(b_lst, op_lst);
	}
}

static void	push_chunk(t_list **al, t_list **bl, t_list **opl, int limit)
{
	int	current_index;
	int	size;

	current_index = 0;
	size = ft_lstsize(*al);
	while (*al && current_index < size)
	{
		if ((*al)->index >= 0 && (*al)->index < limit)
			pb(al, bl, opl);
		else
			ra(al, opl);
		current_index++;
	}
}

void	chunk_sort(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	int	chunk_size;
	int	limit;

	if (!a_lst || !*a_lst || !b_lst)
		return ;
	chunk_size = ft_sqrt(ft_lstsize(*a_lst));
	limit = chunk_size;
	while (*a_lst)
	{
		push_chunk(a_lst, b_lst, op_lst, limit);
		limit += chunk_size;
	}
	while (*b_lst)
	{
		move_to_top_largest_in_b(b_lst, op_lst);
		pa(a_lst, b_lst, op_lst);
	}
}
