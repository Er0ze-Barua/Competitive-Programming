#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--) {
        int n,k;
        cin >> n >> k ;
        vector<int> nums(n) ;
        for (int i = 0 ; i< n ; i++) {
            cin >> nums[i] ;
        }
        vector<int> prefix(n+1,0) ;
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i] % k;
            prefix[i + 1] %= k;
        }

        vector<int> freq(k,0) ;
        long long ans = 0 ;

        for (int r = 0 ; r<=n ;r++){
            if (r>=k+1) {
                freq[prefix[r-k-1]]++ ;
            }
            if (r>=k+1) {
                ans+= freq[prefix[r]] ;
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}