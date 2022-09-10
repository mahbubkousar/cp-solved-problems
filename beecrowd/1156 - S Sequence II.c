//https://www.beecrowd.com.br/judge/en/problems/view/1156
//Mahbub Kousar
#include <stdio.h>
#include <math.h>

int main(void)
{

    double i,j=1.0,sum=0;
    for (i=1.0;i<=39.0;i=i+2.0)
    {
        sum=sum+i/j;
        j=j+j;
    }

    printf("%.2f\n",sum);
    return 0;
}
