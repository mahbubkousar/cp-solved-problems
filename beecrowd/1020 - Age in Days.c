//https://www.beecrowd.com.br/judge/en/problems/view/1020
//1020 - Age in Days
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int d, y, m;
    scanf("%d", &d);
    y = d/365;
    d = d - (365*y);
    m = d/30;
    d = d - (m*30);
    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
