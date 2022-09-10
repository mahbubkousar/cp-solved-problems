//https://www.beecrowd.com.br/judge/en/problems/view/1079
//Mahbub Kousar
#include <stdio.h>

int main()
{
    float a,b,c;
    int i,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%f %f %f", &a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}
