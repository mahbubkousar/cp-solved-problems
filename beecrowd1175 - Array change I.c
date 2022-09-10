//https://www.beecrowd.com.br/judge/en/problems/view/1175
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int arr[20];
    int i,temp;
    for(i=0;i<20;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        temp = arr[i];
        arr[i] = arr[19-i];
        arr[19-i] = temp;
        
        
    }
    for(i=0;i<20;i++)
    {
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
