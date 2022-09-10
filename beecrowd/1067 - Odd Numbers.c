//https://www.beecrowd.com.br/judge/en/problems/view/1067
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,n;
    scanf("%d", &a);
    for (n=1;n<=a;n++)
    {
        if (n%2!=0)
            printf("%d\n",n);
    }
    return 0;
}
