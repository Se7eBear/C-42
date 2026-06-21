/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:52:02 by brde-car          #+#    #+#             */
/*   Updated: 2026/06/21 02:34:24 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strchar(const char *s, int c);
int		ft_strlcat(char *dst, const char *src, int size);
int		ft_strlcpy(char *dst, const char *src, int size);
char	*ft_strjoin(char const *s1, char const *s2);

#endif