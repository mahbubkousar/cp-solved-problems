// https://www.beecrowd.com.br/judge/en/problems/view/1019
// 1019 - Time Conversion
// Mahbub Kousar
#include <stdio.h>

int main()
{
    int s, h, m;
    scanf("%d", &s);
    h = s/3600;
    s = s - (3600*h);
    m = s/60;
    s = s - (m*60);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
