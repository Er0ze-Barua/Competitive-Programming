#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        vector<int> nums(n) ;
        for(int i = 0 ; i< n ; i++) {
            cin >> nums[i] ;
        }
        int c1 = 0, c2 = 0 ;
        for (int i = 0 ; i< n ; i++) {
            if(nums[i] == 0) {
                c1++ ;
            }
            else if(nums[i] == 1) {
                c2++ ;
            }
         }
         long long ans = c2 * (1LL << c1) ;
         cout << ans << endl ;
    }
    return 0 ;
}