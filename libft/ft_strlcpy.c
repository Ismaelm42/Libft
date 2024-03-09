#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	char	*str_dst;
	char	*str_src;	
	size_t	i;

	str_dst = (char *)dst;
	str_src = (char *)src;
	i = 0;
	if (dstsize != '\0')
	{	
		while (str_src[i] != '\0' && i < (dstsize - 1))
		{
			str_dst[i] = str_src[i];
			i++;
		}
		str_dst[i] = '\0';
	}
	return (ft_strlen(src));
}
