/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:38:01 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/18 20:12:28 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>

int	bytes_in_next_line(int fd)
{
	char	c;
	int		total_chars;
	int		byte_read;

	c = 0;
	total_chars = 0;
	byte_read = -1;
	if (fd == -1)
		return (-1);
	while (byte_read)
	{
		byte_read = read(fd, &c , 1);
		write(1, &c, 1);
		total_chars += byte_read;
	}
	return (total_chars);
}

// int	bytes_in_next_line(int fd)
// {
// 	char	c;
// 	int		total_chars;
// 	int		byte_read;

// 	c = 0;
// 	total_chars = 0;
// 	byte_read = -1;
// 	if (fd == -1)
// 		return (-1);
// 	while (byte_read)
// 	{
// 		byte_read = read(fd, &c , 1);
// 		write(1, &c, 1);
// 		total_chars += byte_read;
// 		if (c == '\n' || c == EOF)
// 			break ;
// 	}
// 	return (total_chars);
// }

int main(void)
{
	int fd = open("file.txt", O_RDONLY);
	bytes_in_next_line(fd);	
	// char c;
	// read(fd, &c , 1);
	// write(1, &c, 1);
	 close(fd);
}


