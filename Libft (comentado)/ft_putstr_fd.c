/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:35 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 16:18:36 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	*str;
	int	n;

	str = (int *)s;
	n = ft_strlen(s);
	write (fd, str, n);
}

// int	main(void)
// {
// 	char	s[] = "123456abcdef¡'ç- .";
// 	int		fd = 1;

// 	ft_putstr_fd(s, fd);
// 	return (0);
// }
