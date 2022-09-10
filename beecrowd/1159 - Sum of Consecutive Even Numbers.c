//https://www.beecrowd.com.br/judge/en/problems/view/1159
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int n,i,j,sum=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            if(n%2==0)
            {
                sum=0;
                for(i=1;i<=5;i++)
                {
                    sum=sum+n;
                    n=n+2;
                }
                printf("%d\n",sum);
            }
            else
            {
                sum=0;
                n=n+1;
                for(j=1;j<=5;j++)
                {
                    sum=sum+n;
                    n=n+2;
                }
                printf("%d\n",sum);
            }
        }
    }
    return 0;
}
