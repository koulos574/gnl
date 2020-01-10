#include "get_next_line.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			j;
	char			*dest;

	i = start;
	j = 0;
	if (!s || !(dest = ft_strnew(len)))
		return (NULL);
	while (i < len + start)
	{
		dest[j] = s[i];
		i++;
		j++;
	}
	return (dest);
}

char	*ft_strcpy(char *dst, const char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	dest = malloc(sizeof(*dest) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
{
		free(*as);
		*as = NULL;
	}
}
char	*ft_strchr(const char *s, int c)
{
	char	ch;
	int		i;

	ch = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		l1;
	int		l2;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	mem = ft_strnew(l1 + l2);
	if (mem != NULL)
	{
		ft_strcpy(mem, s1);
		ft_strcpy(mem + l1, s2);
	}
	return (mem);
}

size_t	ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = malloc(sizeof(char) * (size + 1));
	if (mem != NULL)
		ft_memset(mem, 0, size + 1);
	return (mem);
}

void	*ft_memset(void *b, int c, size_t len)
{
	int		ch;
	size_t	i;

	ch = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = ch;
		i++;
	}
	return (b);
}
