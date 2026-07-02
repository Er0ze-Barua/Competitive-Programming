#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int a , b ,c ,d ;
        cin >> a >> b >> c >> d ;

        if((d<b) || (a+d-b<c)) {
            cout <<"-1" << endl ;
        }
        else {
            int di = d-b ;
            int left = a + di - c ;
            int ans = di + left ;
            cout << ans << endl ;
        }
    }
    return 0 ;
}