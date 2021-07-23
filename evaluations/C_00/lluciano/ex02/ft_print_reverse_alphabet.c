#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	alpha;
	int		counter;

	alpha = 'z';
	counter = 26;
	while (counter > 0)
	{
		write(1, &alpha, 1);
		alpha--;
		counter--;
	}
}
