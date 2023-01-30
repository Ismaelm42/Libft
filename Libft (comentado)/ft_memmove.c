/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:23 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:11:09 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str_dst;
	char	*str_src;
	size_t	i;

	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	if (!str_dst && !str_src)
		return (NULL);
	if (str_dst > str_src)
	{
		while (len-- > 0)
		{
				str_dst[len] = str_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			str_dst[i] = str_src[i];
			i++;
		}
	}
	return (str_dst);
}
/*
int	main(void)
{
	char	dst [] = "123456789";
	char	src [] = "abcd";
	size_t	len;
	len = 0;
	printf("%s\n", memmove(dst, src, len));
	return (0);
}
*/