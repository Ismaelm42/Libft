/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:40:45 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/04 15:48:15 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
/*
int main(void)
{
	char a;
	char b;

	a = '-';
	b = 'x';

	printf("%c\n",toupper(a));
	printf("%c\n\n",toupper(b));

	printf("%c\n",ft_toupper(a));
	printf("%c\n",ft_toupper(b));
}
*/