/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:12:08 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/25 12:23:40 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_counter(char const *str)
{
	write(1, str, 1);
	return (1);
}

static int	ft_length(char const *str, va_list arg, int length)
{
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c' || *str == 's' || *str == 'p' || *str == 'd'
				||*str == 'i' || *str == 'u' || *str == 'x' || *str == 'X')
				length = (length + ft_call((va_arg(arg, void *)), str));
			else
				length = length + ft_char_counter(str);
		}
		else
			length = length + ft_char_counter(str);
		str++;
	}
	va_end(arg);
	return (length);
}

int	ft_printf(char const *str, ...)
{
	int		length;
	va_list	arg;

	if (write(1, "", 0) == -1)
		return (-1);
	length = 0;
	va_start(arg, str);
	if (*str == 0)
		return (0);
	length = ft_length(str, arg, length);
	return (length);
}
