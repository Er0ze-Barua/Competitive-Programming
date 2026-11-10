#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long a, b ;
    cin >> a >> b ;
    int ans = INT_MAX ;
    for (int i = 0 ; i<= 50 ;i++) {
        long long temp_a =a ;
        long long temp_b = b+i ; 

        if (temp_b == 1) {
            continue ;
        }
        int divs = 0 ;
        while(temp_a > 0) {
            temp_a /= temp_b;
            divs++ ;
        }
        int total_op = divs+ i ;
        ans = min(ans , total_op) ;
    }
    cout << ans << endl ;
}

int main(){
    int test_c ;
    cin >> test_c ;
    while(test_c--) {
        solve_by_eroze();
    }
}