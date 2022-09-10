//https://www.beecrowd.com.br/judge/en/problems/view/1115
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int a,b,i;
    while(1)
    {
        scanf("%d %d", &a,&b);
        if(a==0 || b==0)
        break;
        else
        {


        if (a>0 && b>0)
            printf("primeiro\n");
        else if(a<0 && b>0)
            printf("segundo\n");
            else if (a<0 && b<0)
            printf("terceiro\n");
        else if(a>0 && b<0)
            printf("quarto\n");
        }

    }
    return 0;
}
