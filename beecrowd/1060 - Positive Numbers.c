//https://www.beecrowd.com.br/judge/en/problems/view/1060
//1060 - Positive Numbers
//Mahbub Kousar
#include <stdio.h>

int main()
{
    float a,b,c,d,e,f;
    int pos = 0;
    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);
    if (a>0)
    {
         pos = pos +1;
    }

    if (b>0)
    {
        pos = pos +1;
    }

    if (c>0)
    {
        pos = pos +1;
    }

    if (d>0)
    {
      pos = pos +1;
    }

    if (e>0)
    {
                pos = pos +1;
    }

    if (f>0)
    {
         pos = pos +1;
    }

    printf("%d valores positivos\n",pos);
    return 0;
}
