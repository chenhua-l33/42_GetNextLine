/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:38:01 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/22 21:05:25 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	fin_len;

	unsigned int (i) = 0;
	size_t (s_len) = ft_strlen(s);
	if (start >= s_len)
		return (ft_calloc(1, 1));
	if (start + len > s_len)
		fin_len = s_len - start;
	else
		fin_len = len;
	sub = malloc((fin_len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (i < fin_len)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	size_t (i) = 0;
	size_t (s1_len) = ft_strlen(s1);
	size_t (s2_len) = ft_strlen(s2);
	size_t (res_len) = s1_len + s2_len;
	res = malloc((res_len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < s1_len)
	{
		res[i] = s1[i];
		++i;
	}
	while (i < res_len)
	{
		res[i] = s2[i - s1_len];
		++i;
	}
	res[i] = 0;
	return (res);
}

ssize_t	check_newline_exist(char *s, size_t len)
{
	ssize_t	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == '\n')
			return (i);
		++i;
	}
	return (-1);
}
