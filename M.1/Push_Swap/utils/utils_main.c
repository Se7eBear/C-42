/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 14:42:33 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 22:31:45 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_array(int *arr, int size)
{
	int	i;
	int	temp;
	int	swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}

static void	fill_values_array(t_list *stack_a, int *arr)
{
	t_list	*current;
	int		i;

	current = stack_a;
	i = 0;
	while (current)
	{
		arr[i] = *(int *)(current->content);
		current = current->next;
		i++;
	}
}

static void	assign_from_sorted_array(t_list *stack_a, int *arr, int size)
{
	t_list	*current;
	int		i;

	current = stack_a;
	while (current)
	{
		i = 0;
		while (i < size)
		{
			if (*(int *)(current->content) == arr[i])
			{
				current->index = i;
				break ;
			}
			i++;
		}
		current = current->next;
	}
}

void	assign_indexes(t_list *stack_a)
{
	int		size;
	int		*arr;

	size = ft_lstsize(stack_a);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return ;
	fill_values_array(stack_a, arr);
	sort_array(arr, size);
	assign_from_sorted_array(stack_a, arr, size);
	free(arr);
}

void	execute_sort(t_list **a, char *strat, t_list **opl)
{
	float	disorder;
	int		size;
	t_list	*b;

	if (is_ordened(*a))
		return ;
	b = NULL;
	size = ft_lstsize(*a);
	disorder = 0.0;
	if (!ft_strncmp(strat, "--simple", 9))
		ft_selection_sort(a, &b, size, opl);
	else if (!ft_strncmp(strat, "--medium", 9))
		chunk_sort(a, &b, opl);
	else if (!ft_strncmp(strat, "--complex", 10))
		radix_sort(a, &b, opl);
	else if (!ft_strncmp(strat, "--adaptive", 11))
	{
		disorder = compute_disorder(*a);
		if (disorder < 0.2)
			ft_selection_sort(a, &b, size, opl);
		else if (disorder < 0.5)
			chunk_sort(a, &b, opl);
		else
			radix_sort(a, &b, opl);
	}
}
