/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:17:42 by qkherzi           #+#    #+#             */
/*   Updated: 2021/05/08 15:40:35 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

int		get_next_line(int fd, char **line);
int		ft_strrlen(char *str);
void	ft_strncpy(char *dst, char *src, int n);
int		ft_strchr(char *str, int *c);
char	*ft_strnjoin(char *dst, char *src, int n);
#endif
