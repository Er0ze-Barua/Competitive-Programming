#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        int n , k ;
        cin >> n >> k ;
        vector<int> nums;
        for (int i = 0 ;i< n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        sort(nums.begin(), nums.end()) ;
        int ans = 0 ;
        int max_block = 1 ;
        int temp_block = 1 ;
        for (int i = 1 ; i< n ;i ++) {
            if (nums[i]-nums[i-1]<=k) {
                temp_block++ ;
            }
            else {
                max_block = max(max_block,temp_block);
                temp_block = 1 ;
            }
        }
        max_block = max(max_block, temp_block);
        ans = n - max_block;
        cout << ans << endl ; 
    }
    return 0 ;
}