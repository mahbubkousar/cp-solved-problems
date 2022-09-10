//https://www.beecrowd.com.br/judge/en/problems/view/1051
//1051 - Taxes
//Mahbub Kousar
#include <stdio.h>

int main()
{
    double s,tax;
    scanf("%lf", &s);
    if (s<=2000.00)
        printf("Isento\n");
    else if (s>=2000.01 && s<=3000.00)
    {
        tax = (s-2000.00)*.08;
        printf("R$ %.2f\n", tax);
    }

    else if (s>=3000,01 && s<=4500.00)
    {
        tax = (1000.00*0.08) + ((s-3000.00)*.18);
        printf("R$ %.2f\n", tax);
    }
    else if (s>4500.00)
     {
        tax = (1000*0.08) +(1500*0.18)+ ((s-4500.00)*.28);
        printf("R$ %.2f\n", tax);
    }

    return 0;
}
