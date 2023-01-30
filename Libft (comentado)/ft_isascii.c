/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:40:05 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/04 16:07:05 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)

{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    int str = '+';
    int stv = 'a';
    printf("\nResult: %d", isascii(str));
    printf("\nResult: %d", isascii(stv));
    printf("\nResult: %d", ft_isascii(str));
    printf("\nResult: %d", ft_isascii(stv));

    return (0);
}
*/