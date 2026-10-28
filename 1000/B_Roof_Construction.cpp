#include<bits/stdc++.h>
using namespace std; 

void solve_by_eroze(){
    int n;
    cin >> n ;
    int ans = 1 ;
    while (ans*2<=n-1) {
        ans *= 2;
    }

    vector<int> nums ;
    for (int i = ans-1 ; i>=0 ;i--) {
        nums.push_back(i) ;
    }

    for (int i = ans ; i< n ; i++) {
        nums.push_back(i) ;
    }

    for (int i = 0 ; i< n ; i++) {
        cout << nums[i] <<" " ;
    }
    cout << endl ;
}

int main() {
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze() ;
    }
}