int	ft_str_lenght(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	checkLength;

	counter = 0;
	checkLength = ft_str_lenght(str);
	while (counter < checkLength)
	{
		if (str[counter] < 48 || str[counter] > 57)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
