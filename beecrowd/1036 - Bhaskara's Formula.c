//https://www.beecrowd.com.br/judge/en/problems/view/1036
//1036 - Bhaskara's Formula
//Mahbub Kousar
#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,r1,r2,d;
    scanf("%lf %lf %lf", &a,&b,&c);
    d = b*b - (4 * a * c);
    if (d<0 || a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        r1 = (-b + sqrt(d))/(2 * a);
        r2 = (-b - sqrt(d))/(2 * a);
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
    return 0;
}
