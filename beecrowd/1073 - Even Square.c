//https://www.beecrowd.com.br/judge/en/problems/view/1073
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int i=1;
    while (i<=a)
    {
        if (i%2==0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
        i=i+1;
    }
    return 0;
}
