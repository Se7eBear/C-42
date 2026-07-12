/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 21:24:05 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/09 22:29:36 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	compute_disorder(t_list *stack_a)
{
	long	mistakes;
	long	total_pairs;
	t_list	*current_i;
	t_list	*current_j;

	if (!stack_a || stack_a->next == NULL)
		return (0.0);
	mistakes = 0;
	total_pairs = 0;
	current_i = stack_a;
	while (current_i != NULL)
	{
		current_j = current_i->next;
		while (current_j != NULL)
		{
			total_pairs++;
			if (*(int *)(current_i->content) > *(int *)(current_j->content))
				mistakes++;
			current_j = current_j->next;
		}
		current_i = current_i->next;
	}
	return ((double)mistakes / (double)total_pairs);
}
