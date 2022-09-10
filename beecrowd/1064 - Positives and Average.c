//https://www.beecrowd.com.br/judge/en/problems/view/1064
//1064 - Positives and Average
//Mahbub Kousar
#include <stdio.h>

int main()
{
    float a,b,c,d,e,f;
    int pos = 0;
    float sum=0;
    scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);
    if (a>0)
    {
         pos = pos +1;
         sum = sum +a;
    }

    if (b>0)
    {
        pos = pos +1;
         sum = sum +b;
    }

    if (c>0)
    {
        pos = pos +1;
         sum = sum +c;
    }

    if (d>0)
    {
      pos = pos +1;
       sum = sum +d;
    }

    if (e>0)
    {
                pos = pos +1;
                 sum = sum +e;
    }

    if (f>0)
    {
         pos = pos +1;
          sum = sum +f;
    }

    printf("%d valores positivos\n",pos);
    printf("%.1f\n", sum/pos);
    return 0;
}
