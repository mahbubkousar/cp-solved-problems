//https://www.beecrowd.com.br/judge/en/problems/view/1113
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,i;
    while(1)
    {
        scanf("%d %d", &a,&b);
        if(a==b)
        break;
        else
        {


        if (a>b)
            printf("Decrescente\n");
        else if(a<b)
            printf("Crescente\n");
        }

    }
    return 0;
}
