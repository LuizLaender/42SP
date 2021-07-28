char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (str[a] != '\0')
	{
		if (i == 0 && (str[a] >= 'a' && str[a] <= 'z'))
		{
			str[a] = str[a] - 32;
			i++;
		}
		else if (i > 0 && (str[a] >= 'A' && str[a] <= 'Z'))
		{
			str[a] = str[a] + 32;
			i++
		}
		else if ((str[a] < '0' && (str[a] > '9' && str[a] < 'A'))
			|| (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
			i = 0;
		else
			i++;
		a++;
	}
	return (str);
}
