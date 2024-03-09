#include "../include/libft.h"


size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (len_dst < (dstsize - 1) && dstsize > 0)
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && i < (dstsize - 1))
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	if (len_dst >= dstsize)
		len_dst = dstsize;
	return (len_dst + ft_strlen(src));
}
