/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:05:03 by qkherzi           #+#    #+#             */
/*   Updated: 2021/05/08 15:36:45 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buffer[BUFFER_SIZE + 1];
	int			count;
	int			size;

	*line = NULL;
	if (0 > fd || fd >= 128 || read(fd, buffer, 0))
		return (-1);
	while (1)
	{
		if (ft_strchr(buffer, &count) != -1)
		{
			*line = ft_strnjoin(*line, buffer, count);
			if (!line)
				return (-1);
			ft_strncpy(buffer, buffer + count + 1, BUFFER_SIZE - count);
			return (1);
		}
		*line = ft_strnjoin(*line, buffer, count);
		if (!line)
			return (-1);
		ft_strncpy(buffer, buffer + count + 1, BUFFER_SIZE - count);
		size = read (fd, buffer, BUFFER_SIZE);
		if (size < 1)
			return (size);
	}
}
