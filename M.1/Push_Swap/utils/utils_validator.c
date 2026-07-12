/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_validator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 15:22:03 by smachado          #+#    #+#             */
/*   Updated: 2026/07/09 21:04:09 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	valid_format(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (i != 0 || str[i + 1] < '0' || str[i + 1] > '9')
				return (0);
		}
		else if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(const char *str)
{
	int		i;
	long	result;
	int		s;

	i = 0;
	result = 0;
	s = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * s);
}

int	nbr_validator(char **lst)
{
	int		index;
	long	num;

	if (!lst || !lst[0])
	{
		print_error();
		return (0);
	}
	index = 0;
	while (lst[index])
	{
		if (!valid_format(lst[index]))
		{
			print_error();
			return (0);
		}
		num = ft_atol(lst[index]);
		if (num < -2147483648 || num > 2147483647)
		{
			print_error();
			return (0);
		}
		index++;
	}
	return (1);
}

int	has_duplicates(t_list **lst)
{
	t_list	*current;
	t_list	*runner;

	current = *lst;
	while (current != NULL)
	{
		runner = current->next;
		while (runner != NULL)
		{
			if (*(int *)(current->content) == *(int *)(runner->content))
			{
				print_error();
				ft_lstclear(lst, free);
				return (1);
			}
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}

int	run_validator(int argc, char **argv)
{
	if (argc == 1)
		return (1);
	if (!nbr_validator(argv))
		return (0);
	return (1);
}
