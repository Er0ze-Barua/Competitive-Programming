#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long x,y,k ;
    cin >> x>> y >> k ;
    long long needed = k + k*y ;
    long long ans = (needed-1+x-2)/(x-1) ;

    cout << ans + k<< "\n" ;
}

int main(){
    long long test ;
    cin >> test ;
    while(test--){
        solve_by_eroze();
    }
}