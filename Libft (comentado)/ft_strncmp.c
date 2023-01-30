/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:38 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/14 16:31:00 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i <= (n - 1))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	if (s1[i] == '\0' && i < n)
		return ((unsigned char)s2[i] * -1);
	if (s2[i] == '\0' && i < n)
		return ((unsigned char)s1[i]);
	else
		return (0);
}

// int	main(void)
// {
// 	char	s1[] = "abcdef";
// 	char	s2[] = "abcdefghijklmnop.";
// 	size_t	n;
// 	n = 6;
// 	printf("%d\n", strncmp(s1, s2, n));
// 	printf("%d\n", ft_strncmp(s1, s2, n));
// }