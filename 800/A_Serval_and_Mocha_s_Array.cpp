#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;

        vector<int> nums ;

        for (int i = 0; i< n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }

        bool flag = false ;
        for (int i = 0 ; i< n ; i++) {
            for (int j =i+1 ; j<n ; j++) {
                if(__gcd(nums[i],nums[j])<=2) {
                    flag = true ;
                    break ;
                }
            }
            if(flag){
                break ;
            }
        }
        if(flag) {
            cout<<"Yes" << endl ;
        }
        else {
            cout << "No" << endl ;
        }
    }
    return 0 ;
}