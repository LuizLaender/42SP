#include <unistd.h>
void	ft_print_comb(void);
void	ft_putchar(char one, char two, char three);

void	ft_putchar(char one, char two, char three)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &three, 1);
	if (one != '7' || two != '8' || three != '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{	
	int		first_number;
	int		second_number;
	int		third_number;

	first_number = '0';
	while (first_number <= '7')
	{
		second_number = (first_number + 1);
		while (second_number <= '8')
		{
			third_number = (second_number + 1);
			while (third_number <= '9')
			{
				ft_putchar(first_number, second_number, third_number);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}	
}
