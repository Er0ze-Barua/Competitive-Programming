#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;

    while(t--) {
        int n ; 
        cin >> n ;
        vector<int> nums  ;

        for (int i = 0; i<n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }

        if (nums[0] == 1) {
            cout << " YES" << endl ;
        }
        else {
            cout <<"NO" << endl;
        }
    }
    return 0 ;
}