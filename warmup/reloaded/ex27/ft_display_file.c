/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brde-car <brde-car@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 18:45:45 by brde-car          #+#    #+#             */
/*   Updated: 2026/05/24 09:35:08 by brde-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buf[4096];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot open file.\n", 18);
		return (1);
	}
	bytes_read = read(fd, buf, 4096);
	while (bytes_read > 0)
	{
		write(1, buf, bytes_read);
		bytes_read = read(fd, buf, 4096);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (display_file(argv[1]));
}
