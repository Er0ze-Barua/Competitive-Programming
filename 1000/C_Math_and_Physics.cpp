#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int n ;
    cin >> n ; 
    vector<int> nums(n) ;
    long long sum = 0 ;
    bool flag = false ;

    for (int i = 0 ; i<n ;i++) {
        cin >> nums[i] ;
        sum+= nums[i] ;
        if (i > 0 && i < n-1 && nums[i] >1) {
            flag = true ;
        }
    }
    if (flag) {
        cout << sum-1 << endl ;
    }

    else if (nums[0] == 1 && nums[n-1] == 1) {
        cout << -1 << endl ;
    }
    else {
        cout << sum-(n-1) << endl ;
    }

}

int main(){
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze();
    }
}