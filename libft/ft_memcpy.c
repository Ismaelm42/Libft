#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*str_dst;
	char		*str_src;

	i = 0;
	str_dst = (char *)dst;
	str_src = (char *)src;
	if (str_src == 0 && str_dst == 0)
		return (NULL);
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (str_dst);
}
