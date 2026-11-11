#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int n;
    cin >> n ;
    string s ;
    cin >> s ;
    int count = 0;
    int ans = INT_MAX ;
    for (int i = 0 ; i< n ; i++) {
        if (s[i] == '(') {
            count++ ;
        }
        else {
            count--;
        }
        ans = min(ans,count) ;
    }
    cout << abs(ans) << "\n" ;
}

int main(){
    int test_c ;
    cin >> test_c ;
    while(test_c--) {
        solve_by_eroze();
    }
}