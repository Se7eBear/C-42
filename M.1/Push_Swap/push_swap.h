/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 17:13:10 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/09 22:28:14 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# include "libft/libft.h"

typedef struct s_bench
{
	int	total;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_bench;
typedef struct s_opts
{
	char	*strat;
	int		bench;
	double	disorder;
}	t_opts;

double	compute_disorder(t_list *stack_a);
int		nbr_validator(char **lst);
void	sa(t_list *lst, t_list **op_lst);
void	sb(t_list *lst, t_list **op_lst);
void	ss(t_list *a, t_list *b, t_list **op_lst);
void	pa(t_list **a_lst, t_list **b_lst, t_list **op_lst);
void	pb(t_list **a_lst, t_list **b_lst, t_list **op_lst);
void	rr(t_list **a_lst, t_list **b_lst, t_list **op_lst);
void	ra(t_list **a_lst, t_list **op_lst);
void	rb(t_list **b_lst, t_list **op_lst);
void	rra(t_list **a_lst, t_list **op_lst);
void	rrb(t_list **b_lst, t_list **op_lst);
void	rrr(t_list **a_lst, t_list **b_lst, t_list **op_lst);
int		min_position(t_list *lst);
void	ft_selection_sort(t_list **al, t_list **bl, int size, t_list **opl);
t_list	*get_penultimate(t_list *lst);
int		has_duplicates(t_list **lst);
void	assign_indexes(t_list *stack_a);
void	chunk_sort(t_list **a_lst, t_list **b_lst, t_list **op_lst);
char	**get_args(int argc, char **argv, int *is_alloc);
void	free_args(char **args, int is_alloc);
void	execute_sort(t_list **al, char *strat, t_list **opl);
void	print_error(void);
void	ft_lstprint(t_list *lst);
void	ft_lstprint_op(t_list *lst);
void	radix_sort(t_list **a_lst, t_list **b_lst, t_list **op_lst);
void	run_benchmark(float disorder, char *strat, t_list *op_lst);
int		run_validator(int argc, char **argv);
int		parse_flags(int *argc, char ***argv, char **strat, int *bench);
void	print_flag_bench(char *strat, double disorder);
void	build_list(char **argv, t_list **a_lst);
int		init_stacks(int argc, char **argv, t_list **a);
int		is_ordened(t_list *a);

#endif