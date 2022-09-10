//https://www.beecrowd.com.br/judge/en/problems/view/1151
//Mahbub Kousar
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i,num;
    int dn;
    int d1=0,d2=1;
    dn=d1+d2;
    scanf("%d",&num);
    printf("%d %d",d1,d2);

    for(i=3;i<=num;i++)
    {
        printf(" %d",dn);
        d1=d2;
        d2=dn;
        dn=d1+d2;
        
    }printf("\n");
    return 0;
}
