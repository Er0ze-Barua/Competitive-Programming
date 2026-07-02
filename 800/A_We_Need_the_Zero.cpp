#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;

        vector<int> nums ;
        for (int i = 0 ; i< n ; i++) {
            int x ;
            cin >> x; 
            nums.push_back(x) ;
        }
        int ans = nums[0] ;
        for (int i = 1 ; i< n ; i++) {
                ans = ans^nums[i] ;
            }
        if (n%2 == 0) {
            if (ans == 0) {
                cout << nums[n-1] << endl ;
            }
            else {
                cout << "-1" << endl ;
            }
        }
        else {
            cout << ans << endl ;
        }
    }
    return 0 ;
}