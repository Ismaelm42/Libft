/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:18:28 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 16:18:29 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	*str;
	int	n;

	str = (int *)s;
	n = ft_strlen(s);
	write (fd, str, n);
	write (fd, "\n", 1);
}
