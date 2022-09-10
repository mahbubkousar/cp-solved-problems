//https://www.beecrowd.com.br/judge/en/problems/view/1146
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int x,i;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        if(x==1)
        {
            printf("1\n");

        }
        else if(x==2)
        {
            printf("1 2\n");

        }
        else
        {
            printf("1");
            for (i=2;i<=x;i++)
        {

            printf(" %d",i);
        }

        printf("\n");
        }

    }
    return 0;
}
