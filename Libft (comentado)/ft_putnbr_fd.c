/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:31 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 16:18:32 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	a;

	a = n;
	if (a < 0)
	{
		write (fd, "-", 1);
		a = -a;
	}
	if (a > 9)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putnbr_fd(a % 10, fd);
	}
	else
		ft_putchar_fd(a + '0', fd);
}

// No entiendo bien la función mayor a 9
// Es la misma que la putnbr de la piscina
// Pero ya no recuerdo cómo entra en recursividad

// int	main(void)
// {
// 	int	n;
// 	int	fd;

// 	n = 123456;
// 	fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	write (fd, "\n", 1);
// 	return (0);
// }
