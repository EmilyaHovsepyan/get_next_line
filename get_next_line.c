/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:27:11 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/04/16 12:28:34 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	after_newl(char *buffer)
{
	int	i;
	int	len;

	len = 0;
	while (buffer[len] != '\0' && buffer[len] != '\n')
		len++;
	if (buffer[len] == '\n')
		len++;
	i = 0;
	while (buffer[len] != '\0')
		buffer[i++] = buffer[len++];
	buffer[i] = '\0';
}

char	*exctract_line(char *line, char *buffer)
{
	char	*fulline;
	char	*temp;
	char	*res;
	size_t	len;

	len = 0;
	while (buffer[len] != '\n' && buffer[len] != '\0')
		len++;
	if (buffer[len] == '\n')
		len++;
	res = (char *)malloc(ft_strlen(line) + len + 1);
	if (!res)
		return (free(line), NULL);
	fulline = res;
	temp = line;
	if (temp)
		while (*temp != '\0')
			*fulline++ = *temp++;
	if (buffer && len > 0)
		while (len--)
			*fulline++ = *buffer++;
	*fulline = '\0';
	return (free(line), res);
}

char	*read_line(int fd, char *buffer, char *line)
{
	ssize_t	count_read;
	int		i;

	i = 0;
	while (ft_strchr(line, '\n') == NULL)
	{
		count_read = read(fd, buffer, BUFFER_SIZE);
		if (count_read == -1 || (count_read == 0 && ft_strlen(line) == 0))
		{
			while (i <= BUFFER_SIZE)
				buffer[i++] = '\0';
			return (free(line), NULL);
		}
		if (count_read == 0)
		{
			buffer[count_read] = '\0';
			break ;
		}
		buffer[count_read] = '\0';
		line = exctract_line(line, buffer);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = exctract_line(NULL, buffer);
	if (!line)
		return (NULL);
	line = read_line(fd, buffer, line);
	after_newl(buffer);
	return (line);
}
/*
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h> 
int main(void)
{
	int		fd;
	char	*line;

	fd = open("get_next_line.h", O_RDONLY);

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}

	close(fd);
	return (0);
}*/
