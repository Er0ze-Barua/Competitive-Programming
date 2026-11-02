#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long n ;
    cin >> n ;
    vector<long long> nums(n);
    for (long long i = 0 ; i< n ; i++) {
        cin >> nums[i] ;
    }
    sort(nums.begin(), nums.end()) ;

    long long left = nums[0] ;
    long long right = nums[n-1] ;
    long long mid = nums[n/2] ;

    long long sum = 0 ;
    for (long long i = 0 ; i< nums.size() ; i++) {
        sum += abs(nums[i]-mid) ;
    }
    
    long long ans = abs(left-right) ;

    cout << sum << " " << ans << endl ;
}

int main(){
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze();
    }
}