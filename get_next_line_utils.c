/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:30:01 by ehovsepy          #+#    #+#             */
/*   Updated: 2025/04/16 12:30:03 by ehovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == '\n')
			return ((char *)str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	if (str == NULL)
		return (0);
	while (str[count] != '\0')
		count++;
	return (count);
}
