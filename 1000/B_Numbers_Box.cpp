#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int n , m ;
    cin >> n>> m ;
    vector<vector<int>> nums(n ,vector<int>(m)) ;
    for (int i = 0 ; i< n ; i++) {
        for (int j = 0 ; j< m ;j++) {
            cin >> nums[i][j];
        }
    }
    int sum = 0 , count = 0 , min_val = INT_MAX ;
    bool seen = false ;
    
    for (int i = 0 ; i< n;i++) {
        for (int j = 0 ; j < m ; j++) {
            min_val = min(min_val , abs(nums[i][j])) ;
            sum += abs(nums[i][j]) ;
            if (nums[i][j] <0) {
                count++ ;
            }
            if (nums[i][j] == 0) {
                seen = true ;
            }
        }
    }

    if (seen) {
        cout << sum << endl ;
        return ;
    }
    if (count%2==0) {
        cout <<sum << endl ;
        return ;
    }
    else {
        sum = sum - 2*min_val ;
        cout << sum << endl ;
        return ; 
    }
}

int main(){
    int test_c ;
    cin >> test_c ;
    while(test_c--) {
        solve_by_eroze();
    }
}