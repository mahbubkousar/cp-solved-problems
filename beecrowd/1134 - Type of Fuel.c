//https://www.beecrowd.com.br/judge/en/problems/view/1134
//Mahbub Kousar
#include <stdio.h>

int main()
{
    int x,gas=0,al=0,dis=0;
    while(1)
    {
        scanf("%d",&x);
        if(x==4)
        break;
        else
        {
            if (x>4 || x<1)
                continue;
            else
            {
                if(x==1)
                al++;
                else if(x==2)
                gas++;
                else if(x==3)
                    dis++;

            }
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,gas,dis);
    return 0;
}
