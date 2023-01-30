/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:15 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/08 17:22:28 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;
	size_t			i;

	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str_s1[i] == str_s2[i])
			i++;
		else if (str_s1[i] != str_s2[i])
			return ((int)(str_s1[i] - str_s2[i]));
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "a";
// 	char	s2[] = "";
// 	size_t	n;

// 	n = 0;
// 	printf("%d\n", memcmp(s1, s2, n));
// 	printf("%d\n", ft_memcmp(s1, s2, n));
// 	return (0);
// }