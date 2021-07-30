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

char	*ft_strupcase(char *str)
{
	int	counter;
	int	stringLength;

	counter = 0;
	stringLength = ft_str_length(str);
	while (counter < stringLength)
	{
		if (str[counter] >= 97 && str[counter] <= 122)
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}
