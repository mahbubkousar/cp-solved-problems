//https://www.beecrowd.com.br/judge/en/problems/view/1149
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,sum=0,i;
    scanf("%d %d",&a,&b);

    for(;b<=0;)
    {
        scanf("%d",&b);

    }
    for(i=1;i<=b;i++)
    {
        sum= sum+a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
