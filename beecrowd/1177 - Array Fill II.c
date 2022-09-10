//https://www.beecrowd.com.br/judge/en/problems/view/1177
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int arr[1000];
    int a,i,b;
    scanf("%d",&a);

    for(i=0,b=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,b);
        b++;
        if(b==a)
            b=0;
    }
    return 0;
}
