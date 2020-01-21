/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vifontai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 00:28:31 by vifontai          #+#    #+#             */
/*   Updated: 2020/01/16 00:28:33 by vifontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		find(char *str)
{
	int		a;

	a = 0;
	while ((str[a] != '\0') && (str[a] != '\n'))
		a++;
	return (a);
}

int		go_read(char **str, const int fd, char **line)
{
	char	*tmp;
	int		z;

	z = find(str[fd]);
	if (ft_strchr(str[fd], '\n'))
	{
		*line = ft_strsub(str[fd], 0, z);
		tmp = ft_strdup(str[fd] + z + 1);
		ft_strdel(&str[fd]);
		str[fd] = ft_strdup(tmp);
		free(tmp);
	}
	else if (ft_strchr(str[fd], '\0'))
	{
		*line = ft_strdup(str[fd]);
		ft_strdel(&str[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str[FD];
	char			*tmp;
	char			buff[BUFFER_SIZE + 1];
	int				ret;

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(str[fd], buff);
		free(str[fd]);
		str[fd] = tmp;
		if (ft_strchr(str[fd], '\n'))
			break;
	}
	if (ret < 0)
		return (-1);
	if (ret == 0 && (str[fd][0] == '\0' || str[fd] == NULL))
		return (0);
	return (go_read(str, fd, line));
}
