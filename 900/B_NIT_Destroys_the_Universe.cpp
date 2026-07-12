#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        vector<int> nums(n) ;
        for (int i = 0 ; i< n ; i++) {
            cin>>nums[i] ;
        }
        int block = 0 ;
        for (int i = 0 ; i< n ; i++) {
            if ((nums[i] != 0) && (i == 0 || nums[i - 1] == 0)) {
                block++ ;
            }
        }
        if (block == 0) {
            cout <<0 <<endl ;
        }
        else if (block == 1) {
            cout << 1 <<endl ;
        }
        else{
            cout << 2 << endl ;
        }
    }
    return 0 ;
}