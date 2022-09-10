//https://codeforces.com/contest/1426/problem/A
//Mahbub Kousar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,y;
    cin>>i;
    while(i--) {
        cin >> x>>y;
        if(x<=2)
            cout <<1<<endl;
        else {
            int floor=2,k=y+2;
            for(int w=0;w<=1000;w++) {
                if(k>=x) {
                cout << floor <<endl;
                break;
            }
            else {
                floor++;
                k+=y;
            }
            }
        }
    }
    return 0;
}
