/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 16:52:37 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 22:28:48 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "push_swap.h"

static void	free_content(void *content)
{
	free(content);
}

static void	end_program(t_list *a, t_list *op)
{
	ft_lstprint_op(op);
	ft_lstclear(&a, free_content);
	ft_lstclear(&op, free_content);
}

int	is_ordened(t_list *a)
{
	int	pos;
	int	nex;

	while (a && a->next)
	{
		pos = *(int *)a->content;
		nex = *(int *)a->next->content;
		if (pos > nex)
			return (0);
		a = a->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list	*a_lst;
	t_list	*op_lst;
	t_opts	opts;

	a_lst = NULL;
	op_lst = NULL;
	opts = (t_opts){.bench = 0, .disorder = 0, .strat = "--adaptive"};
	if (!parse_flags(&argc, &argv, &opts.strat, &opts.bench))
		return (1);
	if (argc == 1)
		return (0);
	if (!init_stacks(argc, argv, &a_lst))
		return (1);
	if (opts.bench)
		opts.disorder = compute_disorder(a_lst);
	execute_sort(&a_lst, opts.strat, &op_lst);
	if (opts.bench)
		run_benchmark(opts.disorder, opts.strat, op_lst);
	end_program(a_lst, op_lst);
	return (0);
}
