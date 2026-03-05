#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;

    while(t--) {
        int n, k ;
        cin >> n >> k ;
        vector<int> nums ;
        for (int i = 0 ; i< n ; i++) {
            int x ;
            cin >> x ;
            nums.push_back(x) ;
        }
        bool flag = true ;
        for (int i = 0 ; i< n ; i++) {
            if(nums[i] == k) {
                cout <<"YES" << endl ;
                flag = false ;
                break ;
            }
        }

        if (flag == true) {
            cout << "NO" << endl ; 
        }
    }
    return 0 ; 
}