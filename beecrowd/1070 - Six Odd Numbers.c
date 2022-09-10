//https://www.beecrowd.com.br/judge/en/problems/view/1070
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if (a%2 == 0)
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n",a+1,a+3,a+5,a+7,a+9,a+11);

    }
    else
    {
        printf("%d\n%d\n%d\n%d\n%d\n%d\n", a,a+2, a+4,a+6,a+8,a+10);
    }
    return 0;
}
