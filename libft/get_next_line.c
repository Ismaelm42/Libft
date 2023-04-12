/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:04:44 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/02/21 10:59:43 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*get_next_line(int fd)
{
	static char		*static_buffer;
	char			*buffer;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	static_buffer = ft_read(fd, static_buffer);
	if (static_buffer == NULL || !static_buffer)
		return (NULL);
	buffer = ft_return_line(static_buffer);
	static_buffer = ft_return_static_buffer(static_buffer);
	return (buffer);
}

char	*ft_read(int fd, char *static_buffer)
{
	char		*buffer;
	long int	bytes_read;

	if (static_buffer && ft_strchr_gnl(static_buffer, 10))
		return (static_buffer);
	bytes_read = 1;
	while (bytes_read > 0 && !(ft_strchr_gnl(static_buffer, 10)))
	{
		buffer = ft_malloc(BUFFER_SIZE + 1);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(buffer), free(static_buffer), NULL);
		static_buffer = ft_strjoin_gnl(static_buffer, buffer, bytes_read);
	}
	return (static_buffer);
}

char	*ft_return_line(char *static_buffer)
{
	char	*buffer;
	int		length;

	if (static_buffer && ft_strchr_gnl(static_buffer, 10))
	{
		length = 0;
		while (static_buffer[length] != 10)
			length++;
		length++;
		buffer = ft_substr_gnl(static_buffer, 0, length);
		return (buffer);
	}
	return (static_buffer);
}

char	*ft_return_static_buffer(char *static_buffer)
{
	char	*buffer;
	int		n;
	int		length;

	if (static_buffer && ft_strchr_gnl(static_buffer, 10))
	{
		n = 0;
		while (static_buffer[n] != 10)
			n++;
		n++;
		length = 0;
		while (static_buffer[n + length] != '\0')
			length++;
		if (length == 0)
			return (free (static_buffer), NULL);
		buffer = ft_substr_gnl(static_buffer, n, length);
		return (free (static_buffer), buffer);
	}
	return (NULL);
}

char	*ft_memcpy_gnl(char *src)
{
	char		*return_buffer;
	long int	i;
	long int	n;

	i = 0;
	n = ft_strlen(src);
	return_buffer = ft_malloc(n + 1);
	if (src == 0)
		return (NULL);
	while (i < n)
	{
		return_buffer[i] = src[i];
		i++;
	}
	return (return_buffer);
}
