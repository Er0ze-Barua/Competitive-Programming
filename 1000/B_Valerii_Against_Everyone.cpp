#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int n ;
    cin >> n ;
    vector<int> nums(n) ;
    set<int> a ;
    for (int i =0 ; i< n; i++) {
        cin >> nums[i] ;
        a.insert(nums[i]) ;
    }

    if (a.size() == n) {
        cout <<"NO" << endl;
        return ;
    }
    else {
        cout <<"YES" <<endl ;
        return ;
    }
}

int main(){
    int test ;
    cin >> test ;
    while(test--){
        solve_by_eroze();
    }
}