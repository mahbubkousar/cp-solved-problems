//https://www.beecrowd.com.br/judge/en/problems/view/1173
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    int arr[10];
    arr[0]= i;
    printf("N[0] = %d\n",i);
    for(j=1;j<10;j++)
    {
        arr[j] = arr[j-1]*2;
        printf("N[%d] = %d\n",j,arr[j]);
    }
    return 0;
}
