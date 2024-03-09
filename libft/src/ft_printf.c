#include "../include/libft.h"


static void	ft_write(int *length, char *str, char c, bool flag)
{
	int	i;

	if (flag == true && str == NULL)
	{
		write(1, "(null)", 6);
		*length += 6;
	}
	else if (flag == true)
	{
		i = 0;
		while (str[i] != 0)
			i++;
		write(1, str, i);
		*length += i;
	}
	else
	{
		write (1, &c, 1);
		*length += 1;
	}
}

static void	ft_hexabase(int *length, char *str, unsigned long nbr, char *hexa)
{
	unsigned long	base;
	char			c;

	if (*str == 'p' || *str == 'x' || *str == 'X')
		base = 16;
	else
		base = 10;
	if (nbr >= base)
	{
		ft_hexabase(length, str, nbr / base, hexa);
		ft_hexabase(length, str, nbr % base, hexa);
	}
	else
	{
		c = hexa[nbr];
		if (*str == 'X' && (c >= 'a' && c <= 'f'))
			c -= ' ';
		ft_write(length, NULL, c, false);
	}
}

static void	ft_convert(int *length, char *str, void *arg)
{
	long				nbr;
	unsigned int		unsigned_nbr;
	unsigned long int	unsigned_long_nbr;

	if (*str == 'd' || *str == 'i')
	{
		nbr = (int)(intptr_t)arg;
		if (nbr < 0)
		{
			ft_write(length, NULL, '-', false);
			nbr = -nbr;
		}
		ft_hexabase(length, str, nbr, "0123456789abcdef");
	}
	else if (*str == 'u' || *str == 'x' || *str == 'X')
	{
		unsigned_nbr = (unsigned int)(uintptr_t)arg;
		ft_hexabase(length, str, unsigned_nbr, "0123456789abcdef");
	}
	else if (*str == 'p')
	{
		unsigned_long_nbr = (unsigned long int)arg;
		ft_write(length, "0x", 0, true);
		ft_hexabase(length, str, unsigned_long_nbr, "0123456789abcdef");
	}
}

static void	ft_exec_printf(char const *str, va_list arg, int *length)
{
	while (*str != 0)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 'c')
				ft_write(length, NULL, va_arg(arg, int), false);
			else if (*str == 's')
				ft_write(length, va_arg(arg, char *), 0, true);
			else if (*str == 'd' || *str == 'i' || *str == 'p'
				|| *str == 'u' || *str == 'x' || *str == 'X')
				ft_convert(length, (char *)str, va_arg(arg, void *));
			else
				ft_write(length, NULL, *str, false);
		}
		else
			ft_write(length, NULL, *str, false);
		str++;
	}
}

int	ft_printf(char const *str, ...)
{
	int			length;
	va_list		arg;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(arg, str);
	length = 0;
	ft_exec_printf(str, arg, &length);
	va_end(arg);
	return (length);
}
