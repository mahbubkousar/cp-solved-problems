//https://www.beecrowd.com.br/judge/en/problems/view/1072
//Mahbub kousar
#include <stdio.h>

int main()
{
    int tc;
    int i=1;
    int a,in=0,out=0;
    scanf("%d",&tc);
    while (i<=tc)
    {
        scanf("%d",&a);

        if (a>=10 && a<=20)
            in = in+1;
        else
            out = out+1;
        i=i+1;

    }
        printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
