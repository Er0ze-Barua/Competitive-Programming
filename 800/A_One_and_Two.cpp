#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        vector<int> nums ;
        int total = 0 ;
        for (int i= 0; i< n; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
            if (x == 2) {
                total++ ;
            }
        }
        if (total%2 != 0) {
            cout << "-1" << endl ;
            continue ;
        }
        int count =0 ;
        for (int i= 0 ; i < n-1 ; i++) {
            if (nums[i] == 2) {
                count++ ;
            }
            if (count == total/2) {
            cout << i +1 << endl ;
            break ;
        }
        }
        
    }
    return 0 ;
}