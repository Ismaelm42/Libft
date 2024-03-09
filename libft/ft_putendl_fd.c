#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	*str;
	int	n;

	str = (int *)s;
	n = ft_strlen(s);
	write (fd, str, n);
	write (fd, "\n", 1);
}
