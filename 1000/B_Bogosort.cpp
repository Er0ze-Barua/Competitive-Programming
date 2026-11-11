#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze() {
    int n;
    cin>> n ;
    vector<int> nums(n) ;
    for (int i = 0 ; i< n ; i++) {
        cin >> nums[i] ;
    }
    sort (nums.rbegin(), nums.rend()) ;
    for (int i = 0 ; i< n ; i++) {
        cout << nums[i] <<" " ;
    }
    cout <<"\n" ;
}

int main(){
    int test_c ;
    cin >> test_c ;
    while(test_c --) {
        solve_by_eroze();
    }
}