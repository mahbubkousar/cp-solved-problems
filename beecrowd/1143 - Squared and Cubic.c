//https://www.beecrowd.com.br/judge/en/problems/view/1143
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("%d %d %d\n", i,i*i,i*i*i);
    }
    return 0;
}
