#include "get_next_line.h"
#include <stdio.h>

int		find(char *str)
{
	int	a;

	a = 0;
	while ((str[a] != '\0') && (str[a] != '\n'))
	{
		a++;
		printf("%d%c\n",a,str[a]);
	}
	return (a);
}

int		go_read(char **str, const int fd, char **line)
{
	char	*tmp;
	int		z;

	z = find(*str);
	if (*str[z] == '\n')
	{
		*line = ft_strsub(*str, 0, z);
		printf("line %s\n",*line);
		*str = ft_strchr(*str, '\n');
		printf("str : %s\n",*str);
	}
	else if ((tmp = ft_strchr(*str, '\0')))
	{
		*line = ft_strdup(*str);
		free(str);
		return (0);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char		*str;
	char			*tmp;
	char			buff[BUFFER_SIZE + 1];
	int				ret;

	if (!line || fd < 0 || BUFFER_SIZE < 1)
		return (-1);;
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!str)
			str = ft_strnew(1);
		tmp = ft_strjoin(str, buff);
		free(str);
		str = tmp;
		if (ft_strchr(str, '\n'))
			break;
	}
	return (go_read(&str,fd, line));
}
