/* 
*  A. Middle of the Contest
*  Codeforces 1133A
*  https://codeforces.com/contest/1133/problem/A
*  Mahbub Kousar
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a,b,c,d;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);
    int t=(((c*60)+d)-((a*60)+b))/2;
    int dh=t/60,dm=t%60;
    if(dm+b >=60) {
        b-=60; a+=1;
    }
    printf("%02d:%02d\n",a+dh,b+dm);
    return 0;
}
