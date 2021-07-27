#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	contadorZ;

	contadorZ = 'z';
	while (contadorZ >= 'a')
	{
		write(1, &contadorZ, 1);
		contadorZ--;
	}
}
