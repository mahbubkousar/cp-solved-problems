//https://www.beecrowd.com.br/judge/en/problems/view/1117
//Mahbub Kousar
#include<stdio.h>
int main()
{
    int counter =0;
    double number, sum=0;
    while(counter!=2)
    {
        scanf("%lf", &number);
        if (number > 10 || number <0)
            {
                printf("nota invalida\n");
            }
        else if (number <= 10 && number >=0) {
            sum = sum + number;
        counter++;
        }
    }
    printf("media = %.2lf\n", sum/2);
    return 0;
}
