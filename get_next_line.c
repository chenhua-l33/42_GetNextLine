/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:28:14 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/26 22:36:20 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	find_newline(char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (s[i] == '\n')
			return (i);
		++i;
	}
	return (-1);
}

char	*found_in_stash(ssize_t i, size_t *stash_len, char *stash, char *line)
{
	char *(part) = ft_substr(stash, 0, i + 1);
	line = join_and_free(line, part);
	free(part);
	ft_memmove(stash, stash + i + 1, *stash_len - i - 1);
	*stash_len = *stash_len - i - 1;
	stash[*stash_len] = 0;
	return (line);
}

char	*get_next_line(int fd)
{
	static char		stash[BUFFER_SIZE + 1];
	static size_t	stash_len;
	ssize_t			i;

	char *(line) = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		i = find_newline(stash, stash_len);
		if (i != -1)
			return (found_in_stash(i, &stash_len, stash, line));
		line = join_and_free(line, stash);
		i = read(fd, stash, BUFFER_SIZE);
		if (i <= 0)
			break ;
		stash_len = i;
		stash[i] = 0;
	}
	if (i == -1 || !line || !*line)
		return (stash_len = 0, stash[0] = 0, free(line), NULL);
	return (stash_len = 0, stash[0] = 0, line);
}
