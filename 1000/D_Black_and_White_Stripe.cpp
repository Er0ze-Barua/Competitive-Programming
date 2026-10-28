#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze() {
    int n , k ;
    string s ;
    cin >> n>> k;
    cin >> s;
    int cw = 0 ;
    int cb = 0 ;
    
    for (int i = 0 ; i< k ;i++) {
        if (s[i] == 'B') {
            cb++ ;
        }
        else {
            cw++;
        }
    }
    int ans = cw ;

    int i=0 ;
    int j = i+k ;

    while(j<n) {
        if (s[j] =='B') {
            cb++ ;
        }
        else {
            cw++;
        }
        if (s[i] == 'B') {
            cb--;
        }
        else{
            cw--;
        }

        ans = min(ans,cw) ;
        i++;
        j++;
    } 

    cout << ans << endl ;
}

int main() {
    int test_case ;
    cin >> test_case ;
    while(test_case--) {
        solve_by_eroze();
    }
}