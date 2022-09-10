//https://www.beecrowd.com.br/judge/en/problems/view/1047
//1047 - Game Time with Minutes
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,c,d, m,h;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (d==b && c==a)
    {
         printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if (d==b && c!=a)
    {
        if (c>=a)
        {
            m=0;
            h = c-a;
        }
        else
        {
            m=0;
            h=c+24-a;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(c==a && d!=b)
    {
        if(d>=b)
        {
            h=0;
            m=d-b;
        }
        else
        {
            h=23;
            m= d+60-b;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(d>b)
    {
        m=d-b;
        if (c>=a)
            h=c-a;
        else
            h=c+24-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (d<b)
    {
         m = d+60-b;
         a = a+1;
         if (c>=a)
            h=c-a;
         else
            h=c+24-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }


    return 0;
}
