/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 17:01:38 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/03 17:45:088 by brde-car         ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	t_list	*tmp;

	if (!b_lst || !*b_lst)
		return ;
	tmp = *b_lst;
	*b_lst = (*b_lst)->next;
	tmp->next = *a_lst;
	*a_lst = tmp;
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("pa")));
}

void	pb(t_list **a_lst, t_list **b_lst, t_list **op_lst)
{
	t_list	*tmp;

	if (!a_lst || !*a_lst)
		return ;
	tmp = *a_lst;
	*a_lst = (*a_lst)->next;
	tmp->next = *b_lst;
	*b_lst = tmp;
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("pb")));
}
