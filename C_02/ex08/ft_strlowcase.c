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

char	*ft_strlowcase(char *str)
{
	int counter;
	int	stringLength;

	counter = 0;
	stringLength = ft_str_length(str);
	while (counter < stringLength)
	{
		if (str[counter] >= 65 && str[counter] <= 90)
		{
			str[counter] +=32;
		}
		counter++;
	}
	return (str);
}