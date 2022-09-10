//https://www.beecrowd.com.br/judge/en/problems/view/1075
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a;
    int i;
    scanf("%d",&a);
    for (i=1;i<=10000;i++)
    {
        if(i%a==2)
            printf("%d\n",i);
    }
    return 0;
}
