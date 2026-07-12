/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 12:01:48 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 21:33:23 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
}

void	ft_lstprint(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

void	ft_lstprint_op(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	print_flag_bench(char *strat, double disorder)
{
	if (!ft_strncmp(strat, "--simple", 8))
		write(2, "%\n[bench] strategy: simple / O(n2)", 34);
	else if (!ft_strncmp(strat, "--medium", 8))
		write(2, "%\n[bench] strategy: medium / O(n √ n)", 39);
	else if (!ft_strncmp(strat, "--complex", 9))
		write(2, "%\n[bench] strategy: complex / O(n log n)", 40);
	else
	{	
		write(2, "%\n[bench] strategy: adaptive / ", 31);
		if (disorder < 0.2)
			write(2, "O(n2)", 5);
		else if (disorder < 0.5)
			write(2, "O(n√n)", 8);
		else if (disorder >= 0.5)
			write(2, "O(n log n)", 10);
	}
}
