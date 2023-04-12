/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:04:36 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/02/19 16:24:43 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_malloc(size_t nmemb)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc (sizeof(char) * nmemb);
	if (str == NULL)
		return (NULL);
	while (i < (sizeof(char) * nmemb))
	{
		str[i] = '\0';
		++i;
	}
	return (str);
}

char	*ft_strchr_gnl(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
	i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2, long int bytes_read)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (bytes_read == 0)
		return (free(s2), s1);
	if (!s1)
	{
		str = ft_memcpy_gnl(s2);
		return (free(s2), str);
	}
	str = ft_malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	return (free(s1), free(s2), str);
}

char	*ft_substr_gnl(char *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		str_start;
	char		*str;

	str_start = (size_t)start;
	i = (size_t)str_start;
	j = 0;
	if (len > (size_t)ft_strlen(s) - str_start)
		len = (size_t)ft_strlen(s) - str_start;
	if (!s)
		return (NULL);
	str = malloc(sizeof (char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && i < (len + str_start))
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
