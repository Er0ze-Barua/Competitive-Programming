#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s ;
        int n = s.size() ;
        int c0 = 0, c1 = 0 , st = 0 ;

        for (int i = 0 ; i< n ; i++) {
            if (s[i]=='0') {
                c0++ ;
            }
            else {
                c1++ ;
            }
        }

        for (int i = 0 ; i< n ; i++) {
            if (s[i] =='0' && c1>0) {
                c1-- ;
                st++ ;
            }
            else if (s[i]=='1' && c0>0) {
                c0-- ;
                st++ ;
            }
            else {
                break ;
            }
        }

        cout << n-st << endl ;
    }
    return 0 ;
}