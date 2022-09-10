//https://www.beecrowd.com.br/judge/en/problems/view/1006
//bee-1006
//Mahbub Kousar
#include <stdio.h>
 
int main() {
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("MEDIA = %.1lf\n", (a*2+b*3+c*5)/(3+2+5));
    return 0;
}
