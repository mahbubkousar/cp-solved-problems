//https://www.beecrowd.com.br/judge/en/problems/view/1013
//1013 - The Greatest
//Mahbub Kousar
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int d= (a+b+abs(a-b))/2;
    int e= (c+d+abs(c-d))/2;
    printf("%d eh o maior\n",e);
    return 0;
}
