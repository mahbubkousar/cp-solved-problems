//https://www.beecrowd.com.br/judge/en/problems/view/1142
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int n;
    int i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=k;
        int m=j+2;
        while(j<=m)
        {
            printf("%d ",j);
            j++;

        }
        printf("PUM");
        printf("\n");
        k=k+4;
    }
    return 0;
}
