#include<bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n ;
        int dup = n ;
        int size = 1 ;
        int last_d=0;
        while (dup >= 10) {
            dup /= 10;
            size++;
        }

        int first = dup;

        cout << first + (size - 1) * 9 << '\n';
    }
    return 0;
}