/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:40:34 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/14 16:28:58 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (len_dst < (dstsize - 1) && dstsize > 0)
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (len_dst >= dstsize)
		len_dst = dstsize;
	return (len_dst + ft_strlen(src));
}

// size_t	ft_strlcat_1(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	if (dstsize == 0)
// 		return (ft_strlen(src));
// 	while (dst[j] != '\0')
// 		j++;
// 	while (src[i] != '\0' && i < (dstsize - 1))
// 	{
// 		dst[j] = src[i];
// 		i++;
// 		j++;
// 	}
// 	return (ft_strlen(src) + dstsize);
// }

// int	main(void)
// {
// 	char	dst[50] = "pqrstuvwx";
// 	char	src[9] = "abcd";
// 	size_t	dstsize;

// 	dstsize = 56;
// 	printf("ft_strlcat:%ld\n%s\n", ft_strlcat(dst, src, dstsize), dst);
// 	return (0);
// }
