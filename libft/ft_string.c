/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:37:20 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/23 13:34:43 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(void *arg)
{
	int		*str;
	int		n;

	if (arg == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	str = (int *)arg;
	n = ft_strlen(arg);
	write (1, str, n);
	return (ft_strlen(arg));
}
