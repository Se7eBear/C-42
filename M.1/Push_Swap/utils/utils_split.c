/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 20:18:22 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/09 21:08:21 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int argc, char **argv, int *is_alloc)
{
	char	**args;

	*is_alloc = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		*is_alloc = 1;
	}
	else
		args = argv + 1;
	return (args);
}

void	free_args(char **args, int is_alloc)
{
	int	i;

	i = 0;
	if (!is_alloc || !args)
		return ;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	build_list(char **argv, t_list **a_lst)
{
	int		index;
	int		*content;

	index = 0;
	while (argv[index])
	{
		content = malloc(sizeof(int));
		if (!content)
			return ;
		*content = ft_atoi(argv[index]);
		ft_lstadd_back(a_lst, ft_lstnew(content));
		index++;
	}
}

int	init_stacks(int argc, char **argv, t_list **a)
{
	char	**args;
	int		is_alloc;

	args = get_args(argc, argv, &is_alloc);
	if (!args || !nbr_validator(args))
	{
		free_args(args, is_alloc);
		return (0);
	}
	build_list(args, a);
	free_args(args, is_alloc);
	if (has_duplicates(a))
		return (0);
	assign_indexes(*a);
	return (1);
}
