/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:28:14 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/22 21:20:39 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			*line;
	char			buf[BUFFER_SIZE + 1];
	static char		stash[BUFFER_SIZE + 1];
	static size_t	stash_len;
	ssize_t			i;

}
