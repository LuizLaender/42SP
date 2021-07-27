#include <unistd.h>

void	ft_print_numbers(void)
{
	int	contadorUm;

	contadorUm = 48;
	while (contadorUm <= 58)
	{
		write(1, &contadorUm, 1);
		contadorUm++;
	}
}
