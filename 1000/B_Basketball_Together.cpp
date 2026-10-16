#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    long long d ;
    cin >> n >> d ;
    vector<long long> nums(n) ;

    for (int i = 0 ; i < n ; i++) {
        cin >> nums[i] ;
    }

    sort(nums.begin(), nums.end()) ;
    int left = 0 , right = n-1 ;
    int ans = 0 ;
    long long count = 1 ;
    while(left<=right) {
        long long r = nums[right] ;

        if (r*count>d) {
            right-- ;
            ans++ ;
            count = 1 ;
        }
        else {
            left++ ;
            count++ ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}