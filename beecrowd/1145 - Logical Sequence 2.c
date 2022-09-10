//https://www.beecrowd.com.br/judge/en/problems/view/1145
//Mahbub Kousar
#include <stdio.h>


int main(void)
{
    int x,y,i,j,a,b,c=1;
    scanf("%d %d",&x,&y);
    a=y/x;
    b=x;
    for (i = 1;i<=a; i++)
    {

        printf("%d",c);
        for(j=c+1;j<=b;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        c = c+x;
        b = b+x;
    }
}
