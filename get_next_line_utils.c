/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 12:38:01 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/26 21:54:15 by chenhli          ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	unsigned char *(dest_buf) = (unsigned char *) dest;
	unsigned char *(src_buf) = (unsigned char *) src;
	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		i = 0;
		while (i < (int) n)
		{
			dest_buf[i] = src_buf[i];
			++i;
		}
	}
	else
	{
		i = n - 1;
		while (i >= 0)
		{
			dest_buf[i] = src_buf[i];
			--i;
		}
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	fin_len;

	unsigned int (i) = 0;
	size_t (s_len) = ft_strlen(s);
	if (start >= s_len)
	{
		sub = malloc(1);
		if (!sub)
			return (NULL);
		*sub = 0;
		return (sub);
	}
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

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*s1;

	if (!s)
		return (NULL);
	len = 0;
	i = 0;
	while (s[len])
		++len;
	s1 = malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (i < len)
	{
		s1[i] = s[i];
		++i;
	}
	s1[i] = 0;
	return (s1);
}

char	*join_and_free(const char *old, const char *add)
{
	if (!add)
		return (free((void *)old), NULL);
	if (!old)
		return (ft_strdup(add));
	size_t (i) = 0;
	size_t (s1_len) = ft_strlen(old);
	size_t (s2_len) = ft_strlen(add);
	size_t (res_len) = s1_len + s2_len;
	char *(res) = malloc((res_len + 1) * sizeof(char));
	if (!res)
		return (free((void *)old), (NULL));
	while (i < s1_len)
	{
		res[i] = old[i];
		++i;
	}
	while (i < res_len)
	{
		res[i] = add[i - s1_len];
		++i;
	}
	res[i] = 0;
	free((void *)old);
	return (res);
}
