/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:43 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/08 13:10:10 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	n;

	n = ft_strlen(s);
	while (n >= 0)
	{
		if (s[n] == (char)c)
		{
			return ((char *)&s[n]);
		}
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "buoh que follon";
	int		c;
	c = 'o';
	printf("%s\n", strrchr(s, c));
	printf("%s\n", ft_strrchr(s, c));
}
*/