/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:41:10 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:13:30 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] == 32 || str[i] == 12 || str[i] == 10
		|| str[i] == 13 || str[i] == 11 || str[i] == 9)
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			k = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	return ((k * j));
}
// int	main(void)
// {
// 	const char str [] = "\e48";
// 	printf("%d\n",ft_atoi(str));
// 	printf("%d\n",atoi(str));
// 	return (0);
// }
