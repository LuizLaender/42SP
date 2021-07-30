#include <stdio.h>

int	ft_str_is_numeric(char *str);

void test(char *str)
{
    printf("Texto enviado:\n%s\n",str);
    int r = ft_str_is_numeric(str);
    printf("Resultado:\n%d\n",r);
}

int main()
{
    char a[] = "12345";
    char b[] = "abc5de";
    char c[] = "a!bcde";
    char d[] = "abcZe";
    char e[] = "";
    printf("***ex03***\n\n");

    printf("Teste 1:\n\n");
    test(a);

    printf("\n\nTeste 2:\n\n");
    test(b);

    printf("\n\nTeste 3:\n\n");
    test(c);

    printf("\n\nTeste 4:\n\n");
    test(d);

    printf("\n\nTeste 5:\n\n");
    test(e);

    printf("\n*********\n");
    return (0);
}
