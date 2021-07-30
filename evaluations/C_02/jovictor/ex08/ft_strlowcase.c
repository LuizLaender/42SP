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
