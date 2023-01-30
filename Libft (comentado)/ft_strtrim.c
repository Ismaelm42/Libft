/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:19:07 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/14 19:04:59 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

// int	main(void)
// {
// 	char	s1[] = "xxxz  test with x and z and x .  zx  xx z";
// 	char	set[] = "z x";

// 	printf("%s\n", ft_strtrim(s1, set));
// 	printf("\ntest with x and z and x .\n");
// 	return (0);
// }
