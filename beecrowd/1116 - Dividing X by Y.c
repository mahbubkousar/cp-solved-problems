//https://www.beecrowd.com.br/judge/en/problems/view/1116
//Mahbub Kousar
#include <stdio.h>
int main()
{
    int i, n;

    float r,x,y;
    scanf("%d" ,&n);
    for(i=1; i<=n; i++)
    {
       scanf("%f %f",&x,&y);
       if (y==0)

        printf("divisao impossivel\n");
       else
       printf("%.1f\n",x/y);

    }
    return 0;
}
