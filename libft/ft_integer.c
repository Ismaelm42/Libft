/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:36:35 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/23 13:34:20 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_integer(int n, int *len)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', 1);
		nbr = -nbr;
		*len = *len + 1;
	}
	if (nbr > 9)
	{
		ft_putnbr_integer(nbr / 10, len);
		ft_putnbr_integer(nbr % 10, len);
	}
	else
	{
		ft_putchar_fd(nbr + '0', 1);
		*len = *len + 1;
	}
}

int	ft_integer(void *arg)
{
	int	count;
	int	*len;

	count = 0;
	len = &count;
	ft_putnbr_integer((int)arg, len);
	return (*len);
}
