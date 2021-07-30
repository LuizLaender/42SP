#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, "\\", 1);
	write(1, "0", 1);
	write(1, &ch, 1);
}

void	hexconvert(char *orig)
{
	int		d_code;
	int		rest;

	d_code = (int) *orig;
	while (d_code != 0)
	{
		rest = d_code % 16;
		if (rest < 10)
			ft_putchar((char)(48 + rest));
		else
			ft_putchar((char)(87 + rest));
		d_code /= 16;
	}
}

int	is_valid(char ch)
{
	if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')))
		if ((ch < 32) || (ch > 126))
			return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (is_valid(*str) == 0)
		{
			hexconvert(str);
			str++;
			continue ;
		}
		write(1, str, 1);
		str++;
	}
}
