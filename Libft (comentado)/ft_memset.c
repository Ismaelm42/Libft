/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:27 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:10:33 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;	
	char	*str;
	char	a;

	i = 0;
	str = (char *)b;
	a = (char)c;
	while (i < n)
	{
		str[i] = a;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char			str[] = "hola, que tal?";
	int				c;
	size_t			n;
	c = 'a';
	n = 4;
	memset(str, c, n);
	memset(str, c, n);
	printf("%s\n", str);
	return (0);
}
*/