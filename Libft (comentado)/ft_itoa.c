/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:18 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 16:18:19 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static size_t	ft_int_len(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = (n * -1);
		i++;
	}
	while ((size_t)n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str;
	long		x;
	size_t		len;

	x = (long)n;
	len = ft_int_len(n);
	str = malloc(sizeof (char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		x = x * -1;
	}
	while (x > 0)
	{
		str[len] = (x % 10) + '0';
		x = x / 10;
		len--;
	}
	return ((char *)str);
}

// int	main(void)
// {
// 	int	n;

// 	n = 123456789;
// 	printf("%ld\n", ft_int_len(n));
// 	printf("%d\n", n);
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }
