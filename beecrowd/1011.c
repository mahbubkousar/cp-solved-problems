//https://www.beecrowd.com.br/judge/en/problems/view/1011
1011 - Sphere
//Mahbub Kousar
#include <stdio.h>
#define pi 3.14159
int main()
{
    double r;
    double ans;
    scanf("%lf", &r);
    ans = (4.0/3.0)*pi* pow(r,3);
    printf("VOLUME = %.3lf\n", ans);
    return 0;
}
