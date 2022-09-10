//https://www.beecrowd.com.br/judge/en/problems/view/1071
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,big,small;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        big=a;
        small=b;
    }
    else
    {
        big=b;
        small=a;
    }
    int i=(small+1);
    int sum=0;
    while (i<big)
    {
        if (i%2!=0)
        {
                        sum=sum+i;
        }
i =i+1;

    }
    printf("%d\n",sum);
    return 0;
}
