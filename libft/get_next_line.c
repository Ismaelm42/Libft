#include "libft.h"

static char	*get_buffer(long int *bytes_read, int fd)
{
	char	*buff;
	int		i;

	i = 0;
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (i <= BUFFER_SIZE)
		buff[i++] = '\0';
	*bytes_read = read(fd, buff, BUFFER_SIZE);
	return (buff);
}

static char	*read_fd_loop(int fd, char *static_buff)
{
	char		*buff;
	char		*ptr;
	long int	bytes_read;

	if (static_buff && ft_strchr(static_buff, '\n'))
		return (static_buff);
	bytes_read = 1;
	while (bytes_read > 0 && (!static_buff || !(ft_strchr(static_buff, '\n'))))
	{
		buff = get_buffer(&bytes_read, fd);
		if (bytes_read == -1)
			return (free(buff), free(static_buff), NULL);
		else if (bytes_read == 0)
			return (free(buff), static_buff);
		else if (!static_buff)
			static_buff = ft_strdup(buff);
		else
		{
			ptr = static_buff;
			static_buff = ft_strjoin(static_buff, buff);
			free(ptr);
		}
		free(buff);
	}
	return (static_buff);
}

static char	*get_line(char *static_buff)
{
	char	*buff;
	int		length;

	if (static_buff && ft_strchr(static_buff, 10))
	{
		length = 0;
		while (static_buff[length] != 10)
			length++;
		length++;
		buff = ft_substr(static_buff, 0, length);
		return (buff);
	}
	return (static_buff);
}

static char	*get_static(char *static_buff)
{
	char	*buff;
	int		n;
	int		length;

	if (static_buff && ft_strchr(static_buff, 10))
	{
		n = 0;
		while (static_buff[n] != 10)
			n++;
		n++;
		length = 0;
		while (static_buff[n + length] != '\0')
			length++;
		if (length == 0)
			return (free(static_buff), NULL);
		buff = ft_substr(static_buff, n, length);
		free(static_buff);
		return (buff);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char		*static_buff[1024];
	char			*buff;

	if (fd == -1)
		return (NULL);
	static_buff[fd] = read_fd_loop(fd, static_buff[fd]);
	if (static_buff[fd] == NULL || !static_buff[fd])
		return (NULL);
	buff = get_line(static_buff[fd]);
	static_buff[fd] = get_static(static_buff[fd]);
	return (buff);
}
