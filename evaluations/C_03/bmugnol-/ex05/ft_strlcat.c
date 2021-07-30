unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	dest += dest_len;
	if (size < dest_len)
		return (src_len + size);
	j = 0;
	while (*src != '\0' && j < size - 1 - dest_len)
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
