int	ft_str_is_lowercase(char str);
int	ft_str_is_alpha_numeric(char str);

char	*ft_strcapitalize(char *str)
{
	int	capitalize;

	capitalize = 1;
	while (*str)
	{
		if (capitalize)
			if (ft_str_is_lowercase(*str))
				*str = *str - 32;
		if (!(ft_str_is_alpha_numeric(*str)))
			capitalize = 1;
		else
			capitalize = 0;
		str++;
	}
	return (str);
}

int	ft_str_is_lowercase(char str)
{
	if (str < 'a' || str > 'z')
		return (0);
	return (1);
}

int	ft_str_is_alpha_numeric(char str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
