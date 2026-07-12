/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:51:08 by smachado          #+#    #+#             */
/*   Updated: 2026/07/03 19:23:56 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rotate(t_list **lst)
{
	t_list	*first;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	first = *lst;
	last = *lst;
	while (last->next)
		last = last->next;
	*lst = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_list **a_lst, t_list **op_lst)
{
	if (!a_lst || !*a_lst || !(*a_lst)->next)
		return ;
	rotate(a_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("ra")));
}

void	rb(t_list **b_lst, t_list **op_lst)
{
	if (!b_lst || !*b_lst || !(*b_lst)->next)
		return ;
	rotate(b_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("rb")));
}

void	rr(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	if (a_lst && *a_lst && (*a_lst)->next
		&& b_lst && *b_lst && (*b_lst)->next)
	{
		rotate(a_lst);
		rotate(b_lst);
		if (op_lst)
			ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("rr")));
	}
}
