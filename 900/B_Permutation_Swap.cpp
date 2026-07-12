#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin>> t ; 
    while (t--) {
        int n ;
        cin >> n ;
        vector<int> nums ;
        for (int i = 0; i< n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        int ans = 0 ;
        for (int i = 0 ; i<n ; i++) {
            int diff = abs(nums[i] - (i+1)) ;
            ans = gcd(ans , diff) ;
        }
        cout << ans << endl ;
    }
    return 0 ;
}