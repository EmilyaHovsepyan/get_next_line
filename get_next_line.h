/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:29:05 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/04/16 12:29:08 by ehovsepy         ###   ########.fr       */
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
char	*read_line(int fd, char *buffer, char *line);
char	*exctract_line(char *line, char *buffer);
void	after_newl(char *buffer);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);

#endif
