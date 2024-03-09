#include "../include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str_s1;
	unsigned char	*str_s2;
	size_t			i;

	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str_s1[i] == str_s2[i])
			i++;
		else if (str_s1[i] != str_s2[i])
			return ((int)(str_s1[i] - str_s2[i]));
	}
	return (0);
}
