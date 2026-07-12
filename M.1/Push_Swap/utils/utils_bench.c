/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/04 14:07:05 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 18:17:10 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	count_routates(char *op_str, t_bench *b)
{
	if (!ft_strncmp(op_str, "ra", 3))
		b->ra++;
	else if (!ft_strncmp(op_str, "rb", 3))
		b->rb++;
	else if (!ft_strncmp(op_str, "rr", 3))
		b->rr++;
	else if (!ft_strncmp(op_str, "rra", 4))
		b->rra++;
	else if (!ft_strncmp(op_str, "rrb", 4))
		b->rrb++;
	else if (!ft_strncmp(op_str, "rrr", 4))
		b->rrr++;
}

static void	count_ops(t_list *op, t_bench *b)
{
	ft_bzero(b, sizeof(t_bench));
	while (op)
	{
		b->total++;
		if (!ft_strncmp(op->content, "sa", 3))
			b->sa++;
		else if (!ft_strncmp(op->content, "sb", 3))
			b->sb++;
		else if (!ft_strncmp(op->content, "ss", 3))
			b->ss++;
		else if (!ft_strncmp(op->content, "pa", 3))
			b->pa++;
		else if (!ft_strncmp(op->content, "pb", 3))
			b->pb++;
		else
			count_routates(op->content, b);
		op = op->next;
	}
}

static void	print_stat(char *name, int val, int nl)
{
	write(2, name, ft_strlen(name));
	ft_putnbr_fd(val, 2);
	if (nl)
		write(2, "\n", 1);
	else
		write(2, " ", 1);
}

static void	print_header(float disorder, char *strat, int total)
{
	int	i;
	int	d;

	i = (int)(disorder * 100);
	d = (int)(disorder * 10000) % 100;
	write(2, "[bench] disorder: ", 18);
	ft_putnbr_fd(i, 2);
	write(2, ".", 1);
	if (d < 10)
		write(2, "0", 1);
	ft_putnbr_fd(d, 2);
	print_flag_bench(strat, disorder);
	write(2, "\n[bench] total_ops: ", 20);
	ft_putnbr_fd(total, 2);
	write(2, "\n", 1);
}

void	run_benchmark(float disorder, char *strat, t_list *op_lst)
{
	t_bench	b;

	count_ops(op_lst, &b);
	print_header(disorder, strat, b.total);
	write(2, "[bench] ", 8);
	print_stat("sa: ", b.sa, 0);
	print_stat("sb: ", b.sb, 0);
	print_stat("ss: ", b.ss, 0);
	print_stat("pa: ", b.pa, 0);
	print_stat("pb: ", b.pb, 1);
	write(2, "[bench] ", 8);
	print_stat("ra: ", b.ra, 0);
	print_stat("rb: ", b.rb, 0);
	print_stat("rr: ", b.rr, 0);
	print_stat("rra: ", b.rra, 0);
	print_stat("rrb: ", b.rrb, 0);
	print_stat("rrr: ", b.rrr, 1);
}
