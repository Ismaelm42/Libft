/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:01:56 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:13:01 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;	
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		++i;
	}
}

// int	main(void)
// {
// 	char	s[] = "hola que pasa aqui";
// 	size_t	n;

// 	n = 19;
// 	ft_bzero(s, n);
// 	printf("%p\n", s);
// 	return (0);
// }
