#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n, k;
        cin >> n >> k ;
        vector<int> nums(n) ;
            for (int i = 0 ; i<n ; i++) {
                cin >> nums[i] ;
            }
            if (k!=4) {
                int ans = INT_MAX ;
                
                for(int i = 0 ; i< n ; i++) {
                    ans = min(ans, (k-nums[i]%k)%k) ;
                }
                cout << ans << endl ;
            }
            else {
                int need = INT_MAX;
                int even = 0 ;
                for (int i = 0 ; i< n ; i++ ){
                    need = min(need , (4-nums[i]%4)%4) ;

                    if(nums[i]%2==0) {
                        even++ ;
                    }
                }

                int need2 = 0 ;
                if(even>=2) {
                    need2=0;
                }
                else if(even == 1) {
                    need2 =1 ;
                }
                else{
                    need2 = 2;
                }
                cout << min(need,need2) << endl ;
            }
        }
    
    return 0 ;
    }