//https://www.beecrowd.com.br/judge/en/problems/view/1010
//1010 - Simple Calculate
//Mahbub Kousar
#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,x,y;
    scanf("%d %d %f", &a,&b,&e);
    x = b*e;
    scanf("%d %d %f", &c,&d,&f);
    y = x + (d*f);
    printf("VALOR A PAGAR: R$ %.2f\n",y);
    return 0;

}
