//https://www.beecrowd.com.br/judge/en/problems/view/1172
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int arr[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=0)
            printf("X[%d] = 1\n",i);
        else
            printf("X[%d] = %d\n",i,arr[i]);
    }

    return 0;
}
