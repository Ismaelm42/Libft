/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 20:02:09 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:11:47 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

// La función pasa a char los arrays.
//Estos pueden no ser imprimibles ya que se fija en el caracter
//ascii (1, 0, 3, 4) serán caracteres no imprimibles.
// Se devuelve void * ya que es lo que pide la cabecera.
// No se tiene en cuenta '\0' ya que también hay
//que tener en cuenta los arrays.
// Se devuelve la dirección del memoria del
//puntero y pasándolo al tipo especificado.

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	str = (unsigned char *)s;
	a = (unsigned char)c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	int		s[3] = {74, 75, 76};
// 	int		c;
// 	size_t	n;

// 	c = '4';
// 	n = 3;
// 	ft_memchr(s, c, n);
// 	// printf ("%s\n", memchr(s, 0, 1));
// 	// printf ("%d\n", s[2]);
// 	return (0);
// }