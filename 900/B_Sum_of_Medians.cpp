#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        long long n, k;
        cin >> n >> k ;
        vector <long long> a(n*k) ;
        for(int i = 0 ; i<n*k ;i++) {
            cin >> a[i] ;
        }

        long long s = n/2 ;
        long long idx = n*k-s-1;

        long long ans = 0 ;

        while(k--) {
            ans+=a[idx] ;
            idx -=(s+1) ;
        }
        cout << ans << endl ;
    }
    return 0 ;
}