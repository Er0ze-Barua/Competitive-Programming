#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n, k, q ;
        cin >> n >> k >> q ;
        vector<int> nums(n) ;
        for (int i = 0 ; i< n ; i++) {
            cin >> nums[i] ;
        }
        long long cons = 0 ;
        long long ans = 0 ;

        for (int i  = 0 ; i< n ; i++) {
            if (nums[i]<=q) {
                cons++;

                if (cons>=k) {
                    ans += cons-k+1 ;
                }
            }
            else {
                cons = 0 ;
            }
        }
        cout << ans << endl ;
    }
}