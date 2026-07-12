#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin>> t ;
    while(t--) {
        long long n ;
        cin >> n ;
        vector<long long> nums(n) ;
        for (long long i = 0 ; i< n ; i++) {
            cin >> nums[i] ;
        }
        long long i = n-1 ;
        long long count = 0 ;
        bool flag = true ;
        while (i>0) {
            if (nums[i-1] == 0 && nums[i-1]>=nums[i]){
                cout << -1 << endl ;
                flag = false ;
                break ;
            }
            if(nums[i]<=nums[i-1]) {
                count++ ;
                nums[i-1] =nums[i-1]/2 ;
            }
            else {
                i-- ;
            }
        }
        if (flag) {
            cout << count << endl ;
        }
    }
    return 0 ;
}