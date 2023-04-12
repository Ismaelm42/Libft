/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:36:41 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/23 12:35:40 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_unsigned(int n, int *len)
{
	unsigned int	nbr;

	nbr = n;
	if (nbr > 9)
	{
		ft_putnbr_unsigned(nbr / 10, len);
		ft_putnbr_unsigned(nbr % 10, len);
	}
	else
	{
		ft_putchar_fd(nbr + '0', 1);
		*len = *len + 1;
	}
}

int	ft_unsigned(void *arg)
{
	int	count;
	int	*len;

	count = 0;
	len = &count;
	ft_putnbr_unsigned((int)arg, len);
	return (*len);
}
