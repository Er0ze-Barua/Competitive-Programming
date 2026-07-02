#include <bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ; 
        vector<int>nums ;
        for (int i = 0 ; i <n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        int count = 0 ;
        int max_count = 0 ; 
        for (int i = 0 ; i< n ; i++) {
            if (nums[i] == 0) {
                count++ ;
                max_count = max(max_count , count) ;
            }
            else {
                count = 0 ;
            }
        }
        cout << max_count << endl ;
    }
    return 0 ;
}