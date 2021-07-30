#include <stdio.h>

char	*ft_strcapitalize(char *str);

void test(char *str)
{
    printf("String: %s\n", str);
    char *r = ft_strcapitalize(str);
    printf("Resultado: %s\n", r);
}

int main()
{
    char a[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
		char b[] = "-skx*7kb#g@hyuwn~b/[dqj@@<*dfpwv*m:b'r$";
		char c[] = "-T$yiaex3i}h(i/a$";
		char d[] = "-Dz     vxnk'~%/s-$>#ag%6/<dx{e$";
		char e[] = "-3l0=wbw!;o9,zzngwib@*xdu*yyv$";
		char f[] = "-Kr:efldn-Byx'}8thn>$";
		char g[] = "-/p9@mzhh$";
		char h[] = "-{1<~&?{y+$";

		test(a);
	  test(b);
		test(c);
		test(d);
		test(e);
		test(f);
		test(g);
		test(h);
    return (0);
}
