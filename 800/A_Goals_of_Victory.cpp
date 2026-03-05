#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        vector<int> nums ;
        for (int i = 0; i< n-1 ;i ++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        int sum = 0 ; 
        for (int i = 0 ; i< nums.size() ; i++) {
            sum += nums[i] ;
        }
        sum = sum* (-1) ;
        cout << sum << endl ;
    }
    return 0 ;
}