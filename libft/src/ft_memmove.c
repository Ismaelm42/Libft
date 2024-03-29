#include "../include/libft.h"

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
		while (len-- > 0)
			str_dst[len] = str_src[len];
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
