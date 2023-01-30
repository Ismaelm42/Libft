/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:39:42 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/04 15:47:22 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int main(void)
{
    int str = '0';
    int stv = 'a';
    printf("\nResult: %d", isdigit(str));
    printf("\nResult: %d", isdigit(stv));
    printf("\nResult Function: %d", ft_isdigit(str));
    printf("\nResult Function: %d", ft_isdigit(stv));
    return (0);
}
*/