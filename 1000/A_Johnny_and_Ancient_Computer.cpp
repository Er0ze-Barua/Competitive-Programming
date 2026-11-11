#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long a, b ;
    cin >> a >> b ;
    long long max_val = max(a,b) ;
    long long min_val = min(a,b) ;

    if (max_val%min_val != 0) {
        cout << -1 <<"\n" ;
        return ;
    }
    long long ratio = max_val / min_val ;
    long long count = 0 ;
    while (ratio%2==0) {
        
            count++ ;
            ratio /= 2 ;
    }
    if (ratio != 1) {
        cout << -1 << "\n";
        return;
    }
    long long count_8 = count/3 ;
    long long remaining = count%3 ;
    long long count_4 = remaining/2 ;
    long long count_2 = remaining%2 ;
    long long ans = count_8 + count_4 + count_2 ;

    cout << ans << "\n" ;
}

int main(){
    int test_c ;
    cin >> test_c ;

    while (test_c--) {
        solve_by_eroze();
    }
}