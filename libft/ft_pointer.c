/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:37:17 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/23 13:34:27 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putchar_low_hex(char c)
{
	if (c > 57)
		c = c + 39;
	write(1, &c, 1);
}

static void	ft_putnbr_pointer(unsigned long int n, int *len)
{
	if (n > 15)
	{
		ft_putnbr_pointer(n / 16, len);
		ft_putnbr_pointer(n % 16, len);
	}
	else
	{
		ft_putchar_low_hex(n + '0');
		*len = *len + 1;
	}
}

int	ft_pointer(void *arg)
{
	int	count;
	int	*len;

	count = 0;
	len = &count;
	write (1, "0x", 2);
	*len = *len + 2;
	ft_putnbr_pointer((unsigned long int)arg, len);
	return (*len);
}
