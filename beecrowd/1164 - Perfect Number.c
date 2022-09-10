//https://www.beecrowd.com.br/judge/en/problems/view/1164
//Mahbub Kousar
#include <stdio.h>


int main(void)
{
    int  t,i,j,num,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&num);
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {
                sum=sum+j;
            }

        }
        if (num==sum)
        printf("%d eh perfeito\n",num);
    else
        printf("%d nao eh perfeito\n",num);
    }

    return 0;
}
