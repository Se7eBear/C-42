/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:58:33 by smachado          #+#    #+#             */
/*   Updated: 2026/07/03 19:05:17 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(t_list *lst)
{
	void	*tmp;

	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}

void	sa(t_list *a_lst, t_list **op_lst)
{
	if (!a_lst || !a_lst->next)
		return ;
	swap(a_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("sa")));
}

void	sb(t_list *b_lst, t_list **op_lst)
{
	if (!b_lst || !b_lst->next)
		return ;
	swap(b_lst);
	if (op_lst)
		ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("sb")));
}

void	ss(t_list *a, t_list *b, t_list **op_lst)
{
	if (a && a->next && b && b->next)
	{
		swap(a);
		swap(b);
		if (op_lst)
			ft_lstadd_back(op_lst, ft_lstnew(ft_strdup("ss")));
	}
}
