/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:52:02 by brde-car          #+#    #+#             */
/*   Updated: 2026/07/19 16:58:59 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

typedef struct s_buffer
{
	char			*content;
	struct s_buffer	*next;
}	t_buffer;

t_buffer	*allocate_clean_node(char *str);
char		*get_next_line(int fd);
int			find_newline(t_buffer *stash);
void		add_node(t_buffer **stash, char *buffer);
void		free_stash(t_buffer *stash);
int			get_line_len(t_buffer *stash);

#endif