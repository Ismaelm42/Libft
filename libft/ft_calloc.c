#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;

	str = (char *) malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < (size * nmemb))
		str[i++] = '\0';
	return (str);
}
