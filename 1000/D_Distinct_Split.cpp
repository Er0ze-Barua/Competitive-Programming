#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while (t--) {
        int n;
        cin >> n ;
        string s;
        cin >> s ;
        unordered_map<char,int> count ;
        unordered_set<char> seen, remaining ;

        for (int i = 0 ; i < n ; i++) {
            char c = s[i] ;
            count[c]++ ;
            remaining.insert(c) ;
        }
        int max_sum = 0 ;
        for (int i = n-1 ; i > 0 ; i--) {
            char c = s[i] ;
            seen.insert(c) ;
            if (--count[c] == 0) {
                remaining.erase(c) ;
            }
            int curr_sum = seen.size() + remaining.size() ;
            max_sum = max(max_sum , curr_sum) ;
        }
        cout << max_sum << endl ;
    }
    return 0 ;
}