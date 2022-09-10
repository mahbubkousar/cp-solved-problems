//https://www.beecrowd.com.br/judge/en/problems/view/1153
//Mahbub Kousar
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n,i,sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum * i;
    }
    printf("%d\n",sum);
    return 0;
}
