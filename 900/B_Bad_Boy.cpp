#include<bits/stdc++.h>
using namespace std;

int helper(int x1, int y1, int x2, int y2) {
    return (abs(x1-x2) + abs(y1-y2));
}
int main(){
    int t ;
    cin >> t ;
    while(t--) {
        int n,m,i,j ;
        cin >> n >> m >> i >> j ; 

        int d1 = max(helper(i,j,1,1) , helper(i,j,n,m)) + helper(1,1,n,m) ;
        int d2 = max(helper(i,j,1,m) , helper(i,j,n,1)) + helper(1,m,n,1) ;

        if (d1>=d2) {
            cout << 1 << " " << 1 << " " << n << " " << m << endl ;
        }
        else {
            cout << 1 << " " << m<< " " << n << " " <<1 << endl ;
        }
    }
    return 0 ;
}