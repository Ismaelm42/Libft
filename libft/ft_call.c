/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_call.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 12:48:19 by imoro-sa          #+#    #+#             */
/*   Updated: 2023/01/25 12:40:36 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_call(void *arg, char const *print_str)
{
	if (*print_str == 'c')
		return (ft_char(arg));
	if (*print_str == 's')
		return (ft_string(arg));
	if (*print_str == 'p')
		return (ft_pointer(arg));
	if (*print_str == 'd')
		return (ft_decimal(arg));
	if (*print_str == 'i')
		return (ft_integer(arg));
	if (*print_str == 'u')
		return (ft_unsigned(arg));
	if (*print_str == 'x')
		return (ft_lower_case_hex(arg));
	if (*print_str == 'X')
		return (ft_cap_hex(arg));
	else
		return (0);
}
