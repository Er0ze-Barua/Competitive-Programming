#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n ;
        char c ;
        cin >> c ;
        string s;
        cin >> s;
        if (c=='g') {
            cout << 0 << endl;
            continue ;
        }
        string d = s+s ;

        int nxt = -1 , ans = 0 ;
        for (int i = 2*n-1 ; i>=0 ; i--) {
            if (d[i] == 'g') {
                nxt = i ;
            }
            else if(i<n && d[i]==c) {
                ans = max(ans,nxt-i) ;
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}