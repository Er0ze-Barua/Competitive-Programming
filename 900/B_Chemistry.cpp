#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int>freq(26,0);
        for(char c:s) {
            freq[c-'a']++;
        }
        int odd_count = 0 ;
        for (int i =0 ; i<freq.size();i++) {
            if(freq[i]%2 != 0) {
                odd_count++ ;
            }
        }
        int req = (n-k)%2 ;

        if (odd_count <= k+ req){
            cout <<"YES" <<endl;
        }
        else {
            cout <<"NO" <<endl ;
        }
    }
    return 0 ;
}