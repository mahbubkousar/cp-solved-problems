//https://www.beecrowd.com.br/judge/en/problems/view/1158
//Mahbub Kousar
#include<stdio.h>
int main()
{

    int n,x,y,i,j,k,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d",&x,&y);
       if(x%2==0)
       {
           x+=1;
           sum=0;
           for(j=1;j<=y;j++)
           {
               sum+=x;
               x+=2;
           }
           printf("%d\n",sum);
       }
       else
       {
           sum=0;
           for(k=1;k<=y;k++)
           {
               sum=sum+x;
               x=x+2;
           }
           printf("%d\n",sum);
       }
    }
return 0;
}
