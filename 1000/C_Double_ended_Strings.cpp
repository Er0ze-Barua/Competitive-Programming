#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    string a,b ;
    cin >> a >> b ;
    int n = a.size() ;
    int m = b.size() ;

    int max_count = 0 ;

    for (int i = 0 ; i< n ; i++) {
        for (int j = 0 ; j< m ;j++) {
            int count = 0 ;

            while(i+count < n && j+count<m && a[i+count] == b[j+count]) {
                count++ ;
            }
            max_count = max(max_count , count) ;
        }
    }

    cout << n+m -2*max_count << endl;
}

int main(){
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze() ;
    }
}