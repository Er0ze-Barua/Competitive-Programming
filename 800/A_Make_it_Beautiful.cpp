#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;

    while(t--) {
        int n ;
        cin >> n ;

        vector<int> nums ;

        for(int i = 0 ; i < n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }

        bool flag = true ;

        for(int i = 1 ; i < n ; i++) {
            if(nums[i] != nums[i-1]) {
                flag = false ;
                break ;
            }
        }

        if(flag) {
            cout << "NO" << endl ;
            continue ;
        }

        cout << "YES" << endl ;

        cout << nums[n-1] << " ";

        for(int i = 0 ; i < n-1 ; i++) {
            cout << nums[i] << " ";
        }

        cout << endl ;
    }

    return 0 ;
}