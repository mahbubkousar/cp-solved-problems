//https://www.beecrowd.com.br/judge/en/problems/view/1101
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,i,sum=0,max,min;
    while(1)
    {
        sum=0;
        scanf("%d %d", &a,&b);
        if(a<=0 || b<=0)
            break;
        else
        {
            if(a>b)
            {
                max=a;
                min=b;
            }
            else
            {
                max=b;
                min=a;
            }
            for(i=min;i<=max;i++)
            {
                printf("%d ", i);
                sum = sum+i;
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
