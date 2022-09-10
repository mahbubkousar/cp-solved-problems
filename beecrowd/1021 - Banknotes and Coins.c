//https://www.beecrowd.com.br/judge/en/problems/view/1021
//1021 - Banknotes and Coins
//Mahbub Kousar
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,k,l,m,n,i,j;
    double tp;
    scanf("%lf", &tp);
    int taka = tp;
    double p = (double) tp - (double) taka;
    p = p * 100;
    int poisa = p;

    printf("NOTAS:\n");

    a= taka/100;
    printf("%d nota(s) de R$ 100.00\n", a);
    taka = taka - (100*a);

    b= taka/50;
    printf("%d nota(s) de R$ 50.00\n", b);
    taka = taka - (50*b);

    c= taka/20;
    printf("%d nota(s) de R$ 20.00\n", c);
    taka = taka - (20*c);

    d= taka/10;
    printf("%d nota(s) de R$ 10.00\n", d);
    taka = taka - (10*d);

    e= taka/5;
    printf("%d nota(s) de R$ 5.00\n", e);
    taka = taka - (5*e);

    f= taka/2;
    printf("%d nota(s) de R$ 2.00\n", f);
    taka = taka - (2*f);

    printf("MOEDAS:\n");

    poisa = poisa + (taka*100);

    i= poisa/100;
    printf("%d moeda(s) de R$ 1.00\n", i);
    poisa = poisa - (100*i);

    j= poisa/50;
    printf("%d moeda(s) de R$ 0.50\n", j);
    poisa = poisa - (50*j);

    k= poisa/25;
    printf("%d moeda(s) de R$ 0.25\n", k);
    poisa = poisa - (25*k);

    l= poisa/10;
    printf("%d moeda(s) de R$ 0.10\n", l);
    poisa = poisa - (10*l);

    m= poisa/5;
    printf("%d moeda(s) de R$ 0.05\n", m);
    poisa = poisa - (5*m);

    n= poisa/1;
    printf("%d moeda(s) de R$ 0.01\n", n);
    poisa = poisa - (1*n);


    return 0;
}
