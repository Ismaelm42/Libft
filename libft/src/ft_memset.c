#include "../include/libft.h"


void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;	
	char	*str;
	char	a;

	i = 0;
	str = (char *)b;
	a = (char)c;
	while (i < n)
		str[i++] = a;
	return (str);
}
