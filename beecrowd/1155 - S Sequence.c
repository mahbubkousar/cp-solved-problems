//https://www.beecrowd.com.br/judge/en/problems/view/1155
//Mahbub Kousar
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    double sum=0;
    for(i=1;i<=100;i++)
    {
        sum=sum + (1.0/(double)i);
    }
    printf("%.2lf\n",sum);
    return 0;
}
