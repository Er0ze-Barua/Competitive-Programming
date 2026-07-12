#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n;
        string s ;
        cin >> s ;
        int a = s.size() ;

        int ans = 1 , curr = 1 ;
        for(int i = 1 ; i< a ;i++) {
            if (s[i] != s[i-1]) {
                curr = 1 ;
            }
            else {
                curr++ ;
                ans = max(ans,curr) ;
            }
        }
        cout << ans + 1 << endl ;
    }
    return 0 ;
}