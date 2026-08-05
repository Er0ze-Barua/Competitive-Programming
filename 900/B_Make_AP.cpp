#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int a,b,c ;
        cin >> a >> b >> c;
        bool flag = false ;
        int r1 = 2*b - c ;
        int r2 = (a+c)/2 ;
        int r3 = 2*b - a ;

        if (r1>0 && r1%a == 0) {
            flag = true ;
        }
        if ((a+c) %2 == 0) {
            if (r2>0 && r2%b == 0) {
                flag = true;
            }
        }
        if (r3 > 0 && r3%c == 0) {
            flag = true ;
        }

        if (flag) {
            cout << "YES" << endl ;
        }
        else {
            cout <<"NO" << endl ;
        }
    }
    return 0 ;
}