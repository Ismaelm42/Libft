/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:19:11 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/14 16:32:39 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		str_start;
	char		*str;

	str_start = (size_t)start;
	i = (size_t)str_start;
	j = 0;
	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
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

// int	main(void)
// {
// 	const char			s[] = "hola";
// 	unsigned int		start;
// 	size_t				len;

// 	start = 184;
// 	len = 4;
// 	printf ("%s\n", ft_substr(s, start, len));
// 	return (0);
// }

/*
- utilizo size_t str_start para poder cambiarle
el valor si este es demasiado elevado para que no crashee
		if (start > (size_t)ft_strlen(s))
			str_start = (size_t)ft_strlen(s);
(Sigue crasheando con un fallo)
- 
- str = malloc(sizeof (char) * (len + 1))
- le sumo uno en el malloc en caso de que len = 0 de forma
que siempre entre con un caracter
para imprimir el '\0' final.
*/
