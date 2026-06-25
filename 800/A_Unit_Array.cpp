#include<bits/stdc++.h>
using namespace std ;

int main() {
    int a ;
    cin >> a ;
    while (a--) {
        int n ;
        cin >> n ;
        int total = 0 ;
        int ans = 0 ; 
        int count = 0 ;

        for (int i = 0 ; i< n ; i++) {
            int x ;
            cin >> x;
            if (x == -1) {
                count++ ;
            }
            total++ ;
        }
        while (count > total/2) {
            count-- ;
            ans++ ;
        }
        if (count%2 == 1) {
            ans++ ;
        }
        cout << ans<<endl ;
    }
    return 0 ; 
}