#include <stdio.h>

char *ft_strupcase(char *str);

void test(char *str)
{
    printf("Texto enviado:\n%s\n",str);
    char *r = ft_strupcase(str);
    printf("Resultado:\n%s\n",r);
}

int main()
{
    char a[] = "abcde";
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
