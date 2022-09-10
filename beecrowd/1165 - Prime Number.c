//https://www.beecrowd.com.br/judge/en/problems/view/1165
//Mahbub Kousar
#include <stdio.h>


int main(void)
{
    int  t,i,j,num,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d",&num);
        if(num==2)
            printf("%d eh primo\n",num);
        else{ sum=0;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
                sum++;
        }
    if(sum>0)
        printf("%d nao eh primo\n",num);
    else
        printf("%d eh primo\n",num);


    }
    }
    return 0;
}
