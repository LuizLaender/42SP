#include <stdio.h>

void ft_ft(int *num);

int main(void)
{
	int num;

	ft_ft(&num);
	printf("%d", num);
	return(0);
}