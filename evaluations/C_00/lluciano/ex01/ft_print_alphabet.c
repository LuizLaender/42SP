#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	alpha;
	int		counter;

	alpha = 'a';
	counter = 0;
	while (counter < 26)
	{
		write(1, &alpha, 1);
		alpha++;
		counter++;
	}
}
