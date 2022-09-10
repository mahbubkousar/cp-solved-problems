//https://www.beecrowd.com.br/judge/en/problems/view/1018
//1018 - Banknotes
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int n, v,a, b, c, d, e, f,g;
    scanf("%d", &n);
    printf("%d\n", n);
    a= n/100;
    printf("%d nota(s) de R$ 100,00\n", a);
    n = n - (100*a);

    b= n/50;
    printf("%d nota(s) de R$ 50,00\n", b);
    n = n - (50*b);

    c= n/20;
    printf("%d nota(s) de R$ 20,00\n", c);
    n = n - (20*c);

    d= n/10;
    printf("%d nota(s) de R$ 10,00\n", d);
    n = n - (10*d);

    e= n/5;
    printf("%d nota(s) de R$ 5,00\n", e);
    n = n - (5*e);

    f= n/2;
    printf("%d nota(s) de R$ 2,00\n", f);
    n = n - (2*f);

    g= n/1;
    printf("%d nota(s) de R$ 1,00\n", g);
    //n = n - (1*g);

    return 0;
}
