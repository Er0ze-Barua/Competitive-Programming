#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int n ;
    cin >> n ;
    string s ;
    cin >> s ;

    for (int i = 0 ; i< n-1 ; i++) {
        if (s[i]>s[i+1]) {
            cout <<"YES" <<"\n" ;
            cout << i+1 <<" " << i+2 <<"\n" ;
            return ;
        }
    }
    cout << "NO" <<"\n" ;
}

int main(){

    solve_by_eroze();
    return 0 ;
}