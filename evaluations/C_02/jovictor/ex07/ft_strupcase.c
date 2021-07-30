char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if ((*str >= 'a') && (*str <= 'z'))
			*str -= 32;
		str++;
	}
	return (temp);
}
