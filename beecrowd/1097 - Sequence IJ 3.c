//https://www.beecrowd.com.br/judge/en/problems/view/1097
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int i,j,k=5,l;
    for (i=1;i<=9;i=i+2)
    {

        k=k+2;
        l=k;
        for (j=k;j>=l;j=j-1)
        {
            printf("I=%d ", i);
            l=k-2;
            printf("J=%d\n",j);
        }

    }
    return 0;
}
