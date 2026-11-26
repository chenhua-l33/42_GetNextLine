/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:15:19 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/26 22:34:00 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ************************************************************************** */
/*INCLUDES*/
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>

/* ************************************************************************** */
/*MACRO*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* ************************************************************************** */
/*FUNCTION*/
void	*ft_memmove(void *dest, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*join_and_free(const char *old, const char *add);
char	*join_nul_check(const char *old, const char *add);
char	*get_next_line(int fd);
char	*found_in_stash(ssize_t i, size_t *stash_len, char *stash, char *line);
size_t	ft_strlen(const char *s);
ssize_t	find_newline(char *s, size_t len);

#endif
