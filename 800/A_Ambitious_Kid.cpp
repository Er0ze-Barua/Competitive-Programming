#include<bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    vector<int> nums ;
    for (int i = 0 ; i< n ;i ++) {
        int x ;
        cin >> x ;
        nums.push_back(x) ;
    }

    int a = INT_MAX ;
    
    for (int i =0 ; i< n ; i++) {
        int y = nums[i] ;

        a = min (a,abs(y)) ;
    }
    
    cout << a ;
    return 0;
}