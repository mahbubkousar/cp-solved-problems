//https://www.beecrowd.com.br/judge/en/problems/view/1080
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int i,n,count,max=0;
    for(i=1;i<=100;i++)
    {
        scanf("%d", &n);
        if(max<n)
        {
            max=n;
            count=i;
        }

    }
    printf("%d\n",max);
    printf("%d\n",count);
    return 0;
}
