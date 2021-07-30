int	is_alpha(char ch)
{
	if (!((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
			*str += 32;
		str++;
	}
	return (temp);
}

void	capitalize(char **str)
{
	int		i;
	char	*temp;

	i = 0;
	temp = *str;
	while (*temp)
	{
		if (!(is_alpha(*temp)))
			break ;
		temp++;
		i++;
	}
	if (**str >= 'a' && **str <= 'z')
		**str -= 32;
	*str += (i - 1);
}

char	*ft_strcapitalize(char *str)
{
	char	*temp;

	temp = str;
	ft_strlowcase(str);
	while (*temp)
	{
		if (is_alpha(*temp))
			capitalize(&temp);
		temp++;
	}
	return (str);
}
