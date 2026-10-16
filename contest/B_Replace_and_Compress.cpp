#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size() ;

        bool increase = false , decrease = false ;

        for (int i = 1 ; i< n-1 ; i++) {
            if (s[i] == s[i+1] && s[i] == s[i-1]) {
                increase = true ;
            }
            if (s[i] != s[i-1] && s[i]!= s[i+1]) {
                decrease = true ;
            }
        }

        cout << 1 + increase + decrease << endl ;
    }
    return 0 ;
}