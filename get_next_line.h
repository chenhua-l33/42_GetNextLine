/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenhli <chenhli@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:15:19 by chenhli           #+#    #+#             */
/*   Updated: 2026/11/22 14:24:52 by chenhli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* ************************************************************************** */
/*INCLUDES*/
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>

/* ************************************************************************** */
/*MACRO*/
# ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
# endif

/* ************************************************************************** */
/*FUNCTION*/
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*read_into_buf(int fd);
ssize_t	check_newline_exist(char *buf);
char	*get_next_line(int fd);

#endif
