#include<bits/stdc++.h>
using namespace std; 

void solve_by_eroze() {
    int n , x; 
    cin >> n >> x ;
    vector<int> nums(n) ;
    for (int i = 0 ; i< n ; i++) {
        cin >> nums[i] ;
    }

    int count = 0 ;
    int high = nums[0] + x ;
    int low = nums[0] -x ;
    for (int i = 1 ; i< n ; i++) {
        int curr_high = nums[i] + x ;
        int curr_low = nums[i] - x ;

        if (max(low,curr_low) > min(high,curr_high)) {
            count++ ;
            high = curr_high ;
            low = curr_low ;
        }
        else {
            high = min(high,curr_high) ;
            low = max (low, curr_low) ;
        }
    }

    cout << count << endl ;
}

int main(){
    int test_cases;
    cin >> test_cases ;
    while(test_cases--) {
        solve_by_eroze();
    }
}