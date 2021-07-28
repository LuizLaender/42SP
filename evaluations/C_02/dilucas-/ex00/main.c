#include <stdio.h>

char	ft_strcpy(char	*dest, char	*src);

int	main(void)
{
	char	str[] = "Hello!";
	char	dest[] = "How are you?";

	printf("%s\n", str);
	printf("%s\n", dest);
	ft_strcpy(dest, str);
	printf("%s\n", str);
	printf("%s\n", dest);
	return (0);
}