/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 02:32:59 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/18 00:32:38 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_line_len(t_buffer *stash)
{
	int	i;
	int	len;

	len = 0;
	while (stash)
	{
		i = 0;
		while (stash->content[i])
		{
			len++;
			if (stash->content[i] == '\n')
				return (len);
			i++;
		}
		stash = stash->next;
	}
	return (len);
}

void	read_and_stash(int fd, t_buffer **stash)
{
	char	*buffer;
	int		bytes_read;

	while (!find_newline(*stash))
	{
		buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buffer)
			return ;
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			free_stash(*stash);
			*stash = NULL;
			return ;
		}
		buffer[bytes_read] = '\0';
		if (bytes_read == 0)
		{
			free(buffer);
			break ;
		}
		add_node(stash, buffer);
	}
}

char	*extract_line(t_buffer *stash)
{
	char	*line;
	int		i;
	int		j;

	line = malloc(sizeof(char) * (get_line_len(stash) + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (stash)
	{
		j = 0;
		while (stash->content[j])
		{
			line[i++] = stash->content[j];
			if (line[i - 1] == '\n')
				break ;
			j++;
		}
		if (line[i - 1] == '\n')
			break ;
		stash = stash->next;
	}
	line[i] = '\0';
	return (line);
}

void	clean_stash(t_buffer **stash)
{
	t_buffer	*last;
	t_buffer	*clean;
	int			i;

	if (!*stash)
		return ;
	last = *stash;
	while (last->next)
		last = last->next;
	i = 0;
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last->content[i] == '\n')
		i++;
	if (!last->content[i])
	{
		free_stash(*stash);
		*stash = NULL;
		return ;
	}
	clean = allocate_clean_node(last->content + i);
	free_stash(*stash);
	*stash = clean;
}

char	*get_next_line(int fd)
{
	static t_buffer	*stash = NULL;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &line, 0) < 0)
	{
		free_stash(stash);
		stash = NULL;
		return (NULL);
	}
	read_and_stash(fd, &stash);
	if (stash == NULL)
		return (NULL);
	line = extract_line(stash);
	clean_stash(&stash);
	return (line);
}
