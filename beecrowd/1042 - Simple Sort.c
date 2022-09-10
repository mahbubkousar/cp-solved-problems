//https://www.beecrowd.com.br/judge/en/problems/view/1042
//1042 - Simple Sort
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,c,small,mid,big;
    scanf("%d %d %d", &a,&b,&c);
    
    if(a>b && a>c)
        big=a;
    else if (b>c && b>a)
        big =b;
    else 
        big =c;
    
     if(a<b && a<c)
        small=a;
    else if (b<c && b<a)
        small=b;
    else 
        small =c;
        
        mid = (a+b+c)-(big+small);
    
    printf("%d\n%d\n%d\n",small,mid,big);
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}
