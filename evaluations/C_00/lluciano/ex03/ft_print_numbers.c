#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	number;
	int	counter;

	number = '0';
	counter = 10;
	while (counter > 0)
	{
		write(1, &number, 1);
		number++;
		counter--;
	}
}
