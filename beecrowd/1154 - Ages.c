//https://www.beecrowd.com.br/judge/en/problems/view/1154
//Mahbub Kousar
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x,sum=0,counter=0;
    double avg;
    while(1)
    {
        scanf("%d",&x);
        if(x<0)
        break;
        else
        {
            sum=sum+x;
            counter++;
        }
    }
    avg= (double)sum/(double)counter;
    printf("%.2lf\n",avg);
    return 0;
