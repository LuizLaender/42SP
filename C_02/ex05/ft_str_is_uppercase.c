int	ft_str_length(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	checkLength;

	counter = 0;
	checkLength = ft_str_length(str);
	while (counter < checkLength)
	{
		if (str[counter] < 65 || str[counter] > 90)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
