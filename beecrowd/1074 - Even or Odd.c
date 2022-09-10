//https://www.beecrowd.com.br/judge/en/problems/view/1074
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int i=1,n;
    int a;
    scanf("%d",&n);
    while (i<=n)
    {
        scanf("%d",&a);
        if (a==0)
            printf("NULL\n");
        else if(a>=0 && a%2==0)
            printf("EVEN POSITIVE\n");
        else if(a>=0 && a%2!=0)
            printf("ODD POSITIVE\n");
        else if(a<=0 && a%2==0)
            printf("EVEN NEGATIVE\n");
        else if(a<=0 && a%2!=0)
            printf("ODD NEGATIVE\n");

        i=i+1;
    }
    return 0;
}
