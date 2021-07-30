#include <stdio.h>
int ft_str_is_printable(char *str);

void test(char *str)
{
    printf("Texto enviado:\n%s\n",str);
    int r = ft_str_is_printable(str);
    printf("Resultado:\n%d\n",r);
}

int main()
{
    char a[] = "ABCDE\n";
    char b[] = "abc5de";
    char c[] = "a!bcde";
    char d[] = "abcZe";
    char e[] = "";
    char f[] = {'3','a',8,'c','\0'};

    test(a);
    test(b);
    test(c);
    test(d);
    test(e);
    test(f);
    return (0);
}