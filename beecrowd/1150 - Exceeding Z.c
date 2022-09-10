//https://www.beecrowd.com.br/judge/en/problems/view/1150
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int x,y,sum,i,count=0;
    scanf("%d",&x);
    do
    {
        scanf("%d",&y);
    }
    while(x>=y);
    for(sum=0,i=x;sum<y;i++)
    {
        sum=sum+i;
        count++;
    }
    printf("%d\n",count);
    return 0;
}
