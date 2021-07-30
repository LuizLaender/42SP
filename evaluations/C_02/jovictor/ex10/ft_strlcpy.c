unsigned int	ft_strlcpy(char *dest, char *source, unsigned int size)
{
	unsigned int	aux_size;
	char			*aux_dest;
	char			*aux_src;

	aux_size = size - 1;
	aux_dest = dest;
	aux_src = source;
	while (aux_size != 0)
	{
		*aux_dest = *aux_src;
		if (*aux_dest == '\0')
			break ;
		aux_size--;
		aux_dest++;
		aux_src++;
	}
	if (aux_size == 0)
	{
		if (size != 0)
			*aux_dest = '\0';
		while (*aux_src)
			aux_src++;
	}
	return ((aux_src - source));
}
