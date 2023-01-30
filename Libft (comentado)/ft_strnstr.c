/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:41:02 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/14 16:31:34 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size_needle;

	i = 0;
	j = 0;
	size_needle = ft_strlen(needle);
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (needle[i] != '\0' && haystack[j] != '\0' && j < len)
	{
		if (needle[i] == haystack[j])
		{
			if (i == (size_needle - 1))
				return ((char *)&haystack[j - (size_needle - 1)]);
			i++;
			j++;
		}
		else
		{
			i = 0;
			j++;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	haystack[30] = "aaabcabcd";
// 	const char	needle[10] = "abcd";
// 	size_t		len;

// 	len = 9;
// 	printf("%s\n", strnstr(haystack, needle, len));
// 	printf("%s\n", ft_strnstr(haystack, needle, len));
// 	return (0);
// }

/*
DESCRIPTION
     The strnstr() function locates the first occurrence of the null-termi‐
     nated string little in the string big, where not more than len characters
     are searched.  Characters that appear after a ‘\0’ character are not
     searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern.
RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere
     in big, NULL is returned; otherwise a pointer to the first character of
     the first occurrence of little is returned.
*/

CORRECCIÓN:

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (haystack[j] != '\0' && j < len)
	{
		i = 0;
		if (needle[i] == haystack[j])
		{
			while (i + j < len && needle[i] == haystack[i + j])
// j no cambia de valor, solo i, y se le va sumando i a j de forma que va avanzando sin mover en ningun momento la j de posición con su valor j
//esto arregla el problema que daba el anterior con el ejemplo del main que aparece aarriba
//i + j tiene que ser menor que len, es la misma condición de arriba de j < len, sólo que está adaptada al problema que ten
				i++;
//suma la i antes del if para poder hacer el return correctamente
				printf("valor i:%ld\nvalor j:%ld\n", i, j);
//printf para dejarlo mucho más claro
				if (i == (size_t)ft_strlen(needle))
				{
					return ((char *)&haystack[j]);
				}
			}
		}
		j++;
//aqui es donde le suma a la j
	}
	return (0);
}


