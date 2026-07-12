/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smachado <smachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/07 21:30:00 by smachado          #+#    #+#             */
/*   Updated: 2026/07/07 21:30:00 by smachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_flag(char *str)
{
	if (!ft_strncmp(str, "--simple", 9))
		return (1);
	if (!ft_strncmp(str, "--medium", 9))
		return (1);
	if (!ft_strncmp(str, "--complex", 10))
		return (1);
	if (!ft_strncmp(str, "--adaptive", 11))
		return (1);
	if (!ft_strncmp(str, "--bench", 8))
		return (1);
	return (0);
}

int	parse_flags(int *argc, char ***argv, char **strat, int *bench)
{
	int	count;

	count = 0;
	while (*argc > 1 && is_flag((*argv)[1]))
	{
		if (count >= 2)
		{
			print_error();
			return (0);
		}
		if (!ft_strncmp((*argv)[1], "--bench", 8))
			*bench = 1;
		else
			*strat = (*argv)[1];
		count++;
		(*argv)++;
		(*argc)--;
	}
	return (1);
}
