#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
    char a[] = "abcdfgdse";
    char b[5];
    printf("***ex00***\n\n");
    printf("Texto enviado:\n%s\n",a);

    char *c = ft_strcpy(b,a);

    printf("\nTexto no ponteiro enviado: \n%s\n",b);
    printf("\nTexto no ponteiro retornado: \n%s\n",c);

    printf("\n*********\n");
    return (0);
}
