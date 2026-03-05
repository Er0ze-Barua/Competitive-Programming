#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;

    while(t--) {
        int m , n ;
        cin >> n >> m ;

        string x , s ;
        cin >> x >> s;

        int count = 0 ; 

        while(x.size() <= 50) {
            if (x.find(s) != string::npos) {
                cout << count << endl ;
                break ;
            }
            x+=x ;
            count++ ;
        }
        if (x.find(s) == string::npos) {
            cout << -1 <<endl ;
        }
    }
    return 0 ;
}