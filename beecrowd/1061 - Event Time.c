//https://www.beecrowd.com.br/judge/en/problems/view/1061
//1061 - Event Time
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int d1,d2,d3,h1,h2,h3,m1,m2,m3,s1,s2,s3;
    scanf("Dia %d",&d1);
    scanf("%d : %d : %d\n", &h1,&m1,&s1);
    scanf("Dia %d",&d2);
    scanf("%d : %d : %d", &h2,&m2,&s2);

    d3=d2-d1;
    h3=h2-h1;
    m3=m2-m1;
    s3=s2-s1;

    if (s3<0)
    {
        s3+=60;
        m3--;

    }
    if(m3<0)
    {
        m3+=60;
        h3--;
    }
    if(h3<0)
    {
        h3+=24;
        d3--;
    }

    printf("%d dia(s)\n",d3);
    printf("%d hora(s)\n",h3);
    printf("%d minuto(s)\n",m3);
    printf("%d segundo(s)\n",s3);


    return 0;
}
