//https://www.beecrowd.com.br/judge/en/problems/view/1043
//1043 - Triangle
//Mahbub Kousar
#include <stdio.h>

int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
        printf("Perimetro = %.1f\n", a+b+c);
    else
        printf("Area = %.1f\n", 0.5 * (a+b) * c);
    return 0;
}
