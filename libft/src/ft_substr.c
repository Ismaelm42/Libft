#include "../include/libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		str_start;
	char		*str;

	str_start = (size_t)start;
	i = (size_t)str_start;
	j = 0;
	if (start > (size_t)ft_strlen(s))
		return (ft_strdup(""));
	if (len > (size_t)ft_strlen(s) - str_start)
		len = (size_t)ft_strlen(s) - str_start;
	if (!s)
		return (NULL);
	str = malloc(sizeof (char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0' && i < (len + str_start))
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
