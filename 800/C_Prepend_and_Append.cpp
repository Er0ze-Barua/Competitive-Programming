#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin >> t ;

    while(t--) {
        int n ;
        cin >> n ;

        string s ;
        cin >> s ;

        int left = 0 ;
        int right = n - 1 ;
        int diff = 0 ;

        while(left < right) {
            if(s[left] != s[right]) {
                left++ ;
                right-- ;
            }
            else {
                break ;
            }
        }

        
        

        cout << max(0,right-left+1)<< endl ;
    }

    return 0 ;
}