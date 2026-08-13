/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 23:24:04 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/19 19:16:02 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_newline(t_buffer *stash)
{
	t_buffer	*current;
	int			i;

	if (!stash)
		return (0);
	current = stash;
	while (current)
	{
		i = 0;
		while (current->content[i])
		{
			if (current->content[i] == '\n')
				return (1);
			i++;
		}
		current = current->next;
	}
	return (0);
}

void	add_node(t_buffer **stash, char *buffer)
{
	t_buffer	*new_node;
	t_buffer	*last;

	new_node = malloc(sizeof(t_buffer));
	if (!new_node)
		return ;
	new_node->content = buffer;
	new_node->next = NULL;
	if (!*stash)
	{
		*stash = new_node;
		return ;
	}
	last = *stash;
	while (last->next)
		last = last->next;
	last->next = new_node;
}

void	free_stash(t_buffer *stash)
{
	t_buffer	*current;
	t_buffer	*next_node;

	current = stash;
	while (current)
	{
		next_node = current->next;
		free(current->content);
		free(current);
		current = next_node;
	}
}

t_buffer	*allocate_clean_node(char *str)
{
	t_buffer	*clean;
	int			i;

	clean = malloc(sizeof(t_buffer));
	if (!clean)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	clean->content = malloc(sizeof(char) * (i + 1));
	if (!clean->content)
	{
		free(clean);
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		clean->content[i] = str[i];
		i++;
	}
	clean->content[i] = '\0';
	clean->next = NULL;
	return (clean);
}
