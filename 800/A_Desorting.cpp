#include<bits/stdc++.h>
using namespace std;

int main(){
    int x ;
    cin >> x ;

    while (x--) {
        int n ;
        cin >> n ;
        vector<int> nums ;
        for (int i = 0 ; i< n ; i++) {
        int a ;
        cin >> a ;
        nums.push_back(a) ;
        }
        bool flag = true ;
        for (int i = 0 ; i< n-1 ; i++) {
            if (nums[i]>nums[i+1]) {
                cout << 0 << endl;
                flag = false ;
                break ;
            }
        }
        if(flag){
        int ans = INT_MAX ;
        for (int i = 0 ; i< n-1 ; i++) {
            int diff = (nums[i+1]-nums[i])/2 + 1 ;
            ans = min(ans ,diff) ;
        }
        cout << ans <<endl;
    }
    }
return 0 ;

}