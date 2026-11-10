#include<bits/stdc++.h>
using namespace std;

bool is_prime(long long n) {
    if (n<2) {
        return false ;
    }
    for (long long i = 2 ; i*i<= n ;i++) {
        if(n%i==0) {
            return false ;
        }
    }
    return true ;
}
void solve_by_eroze(){
    long long d ;
    cin >> d ;
    long long p, q ;
    for (long long i =1+d ;;i++) {
        if (is_prime(i)) {
            p = i ;
            break ;
        }
    }

    for (long long i = p+ d; ; i++) {
        if (is_prime(i)) {
            q = i ;
            break ;
        }
    }
    long long ans1 = p*p*p ;
    long long ans2 = p*q ;
    long long ans = min(ans1,ans2) ;

    cout << ans << endl ;
}

int main(){
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze();
    }
}