#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive_nulo;

	negative = 'N';
	positive_nulo = 'P';
	if (n == 0 || n > 0)
		write(1, &positive_nulo, 1);
	else
		write(1, &negative, 1);
}
