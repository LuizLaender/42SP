#include <stdio.h>

char *ft_strlowcase(char *str);

void test(char *str)
{
    printf("Texto enviado:\n%s\n",str);
    char *r = ft_strlowcase(str);
    printf("Resultado:\n%s\n",r);
}

int main()
{
    char a[] = "ABCDE";
    char b[] = "ABC5DE";
    char c[] = "a!bCDe";
    char d[] = "aBcZe";
    char e[] = "";
    char f[] = {'3','B',8,'C','\0'};

    test(a);
    test(b);
    test(c);
    test(d);
    test(e);
    test(f);
    return (0);
}
