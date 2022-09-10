//https://www.beecrowd.com.br/judge/en/problems/view/1118
//Mahbub Kousar
#include<stdio.h>
int main()
{
    float num,sum=0,counter=0,num1;
    while(1)
    {
        if(counter==2)
            break;
        scanf("%f",&num);
        if(num>=0&&num<=10)
        {
            counter++;
            sum = sum + num;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %.2f\n",sum/2);

    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%f",&num1);
        if(num1==2)
            break;
        if(num1!=1&&num1!=2)
            continue;
        if(num1==1)
        {
            float num,sum=0,counter=0,num1;
            while(1)
            {
                if(counter==2)
                    break;
                scanf("%f",&num);
                if(num>=0&&num<=10)
                {
                    counter++;
                    sum = sum + num;
                }
                else
                    printf("nota invalida\n");
            }
            printf("media = %.2f\n",sum/2);

        }
    }
    return 0;
}
