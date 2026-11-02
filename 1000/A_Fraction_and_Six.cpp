#include<bits/stdc++.h>
using namespace std ;

void solve_by_eroze(){
    int n, m;
    cin >> n >> m;
    string p,q ;
    cin >> p >> q;
    vector<int> chars(26,0) ;

    for (int i = 0; i<p.size() ;i++) {
        char c = p[i] ;
        chars[c-'a']++ ;
    }
    for (int i = 0 ; i<q.size() ;i++) {
        char c = q[i];
        chars[c-'a']-- ;
    }

    for (int i = 0 ; i<chars.size() ; i++) {
        if (i == 18 || i==8 ||i==23) {
            if (chars[i] == 1) {
                continue ;
            }
            else {
                cout << "NO" << endl ;
                return ;
            }
        }
        else if (chars[i] != 0) {
            cout << "NO" << endl ;
            return ;
        }
    }

    cout << "YES" << endl;
}

int main(){
    int test ;
    cin >> test ;
    while(test--) {
        solve_by_eroze();
    }
}