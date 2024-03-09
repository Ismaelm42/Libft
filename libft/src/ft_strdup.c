#include "../include/libft.h"


char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc (sizeof (char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
