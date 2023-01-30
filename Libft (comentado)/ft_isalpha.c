/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:46:00 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/04 14:17:13 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
    int a = 'b';
    int	b = 'a';


    printf("\nResult: %d", ft_isalpha(a));
    printf("\nResult: %d", ft_isalpha(b));
    return (0);
}
*/