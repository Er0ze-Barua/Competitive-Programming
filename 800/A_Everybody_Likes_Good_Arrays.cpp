#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n ;
        vector<int> nums ;
        for (int i = 0 ; i< n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        int counter = 0 ;
        int ans = 0 ;
        for (int i =1 ; i<n ;i ++) {
            int curr = nums[i]%2 ;
            int prev = nums[i-1]%2 ;

            if (curr == prev) {
                counter++ ;
            }
            else {
                ans+=counter ;
                counter = 0 ;
            }
        }
        ans+=counter;
        cout << ans << endl ;
    }
    return 0;
}