#include "../include/libft.h"


static int	ft_string_counter(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static unsigned int	ft_string_start(char const *s, char c, unsigned int start)
{
	while (s[start] != '\0' && s[start] == c)
		start++;
	return (start);
}

static size_t	ft_string_len(char const *s, char c, unsigned int start)
{
	size_t	i;

	i = 0;
	while (s[start] != '\0' && s[start] != c)
	{
		start++;
		i++;
	}
	return (i);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		free (str[i++]);
	free (str);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	pos;
	int				n;
	char			**str;

	n = 0;
	pos = 0;
	str = ft_calloc((ft_string_counter(s, c) + 1), sizeof(char *));
	if (str == NULL)
		return (NULL);
	while (n < ft_string_counter(s, c))
	{
		pos = ft_string_start(s, c, pos);
		str[n] = ft_substr(s, pos, (size_t)ft_string_len(s, c, pos));
		if (str[n] == NULL)
			return (ft_free(str), NULL);
		n++;
		pos += ft_string_len(s, c, pos);
	}
	str[n] = 0;
	return (str);
}
