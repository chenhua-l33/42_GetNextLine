/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:38:01 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/18 19:48:55 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	while (!byte_read)
	{
		byte_read = read(fd, &c , 1);
		total_chars += byte_read;
		if (c == EOF || c == '\n')
			break ;
	}
	return (total_chars);
}


