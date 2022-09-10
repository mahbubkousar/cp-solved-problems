//https://www.beecrowd.com.br/judge/en/problems/view/1065
//Mahbub Kousar
#include <stdio.h>

int main()
{
    float a,b,c,d,e;
    int pos = 0;
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);
    if ((int)a%2==0)
    {
         pos = pos +1;
    }

    if ((int)b%2==0)
    {
        pos = pos +1;
    }

    if ((int)c%2==0)
    {
        pos = pos +1;
    }

    if ((int)d%2==0)
    {
      pos = pos +1;
    }

    if ((int)e%2==0)
    {
                pos = pos +1;
    }

    printf("%d valores pares\n",pos);
    return 0;
}
