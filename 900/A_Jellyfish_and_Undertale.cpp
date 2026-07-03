#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t;
    while(t--) {
        long long a,b,n ;
        cin >> a >> b >> n ;
        vector<long long> nums ;
        for (long long i = 0 ; i< n ; i++) {
            long long x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        long long time = b ;
        for (long long i = 0 ;i< n ; i++) {
            time += min(nums[i] , a-1) ;
        }
        cout << time << endl ;
    }
    return 0 ;
}