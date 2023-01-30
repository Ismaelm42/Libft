/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:40:53 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/04 15:47:53 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
	}
	return (c);
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 'l';
	b = '-';

	printf("%c\n",tolower(a));
	printf("%c\n\n",tolower(b));

	printf("%c\n",ft_tolower(a));
	printf("%c\n",ft_tolower(b));
}
*/