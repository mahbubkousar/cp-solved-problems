//https://www.beecrowd.com.br/judge/en/problems/view/1099
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,max,min,i,n,sum=0,j;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum=0;
        j=0;
        scanf("%d %d",&a,&b);
        if(a>b) {
            max=a;
        min=b; }
        else{
            max=b; min=a;
        }
       for (j=min+1;j<max;j++)
       {
           if(j%2==1)
            sum += j;
       }
       printf("%d\n",sum);
    }

    return 0;
}
