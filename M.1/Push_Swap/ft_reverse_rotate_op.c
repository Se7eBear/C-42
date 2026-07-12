/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:46:05 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/03 19:46:18 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	reverse_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*penultimate;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	penultimate = NULL;
	last = *lst;
	while (last->next != NULL)
	{
		penultimate = last;
		last = last->next;
	}
	penultimate->next = NULL;
	last->next = *lst;
	*lst = last;
}

void	rra(t_list **a_lst, t_list **op_lst)
{
	if (!a_lst || !*a_lst || !(*a_lst)->next)
		return ;
	reverse_rotate(a_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("rra")));
}

void	rrb(t_list **b_lst, t_list **op_lst)
{
	if (!b_lst || !*b_lst || !(*b_lst)->next)
		return ;
	reverse_rotate(b_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("rrb")));
}

void	rrr(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	if (a_lst && *a_lst && (*a_lst)->next
		&& b_lst && *b_lst && (*b_lst)->next)
	{
		reverse_rotate(a_lst);
		reverse_rotate(b_lst);
		if (op_lst)
			ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("rrr")));
	}
}
