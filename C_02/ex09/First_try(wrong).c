char	*ft_strcapitalize(char *str)
{
	int	counter;

	i = 0;
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'a' && str[counter] <= 'z')
			&& ((str[counter - 1] < 48)
			|| (str[counter - 1] > 57 && str[counter] < 65)
			|| (str[counter - 1] > 90 && str[counter] < 97) 
			|| (str[counter - 1] > 122)))
		{
			str[counter] -= 32;
		}
		else if ((str[counter] >= 'A' && str[counter] <= 'Z')
			&& (!(str[counter - 1] < 48)
			|| (str[counter - 1] > 57 && str[counter] < 65)
			|| (str[counter - 1] > 90 && str[counter] < 97) 
			|| (str[counter - 1] > 122)))
		{
			str[counter] += 32;
		}
		counter++;
	}
	return (str);
}
