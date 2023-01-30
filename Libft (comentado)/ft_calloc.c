/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoro-sa <imoro-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:06:49 by imoro-sa          #+#    #+#             */
/*   Updated: 2022/12/12 15:12:19 by imoro-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc (size * nmemb);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, size * nmemb);
	return (ptr);
}

// int	main(void)
// {
// 	int	i;
// 	int	n;
// 	int	*a;

// 	printf("Number of elements to be entered:");
// 	scanf("%d", &n);

// 	a = (int *) calloc (n, sizeof (int));
// 	printf("Enter %d numbers:\n", n);
// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	printf("The numbers entered are: ");
// 	for (i = 0; i < n; i++)
// 	{
// 		printf("%d", a[i]);
// 	}
// 	free(a);
// 	return (0);
// }