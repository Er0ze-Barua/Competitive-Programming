#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n;
        int dup = n ;
        int a = 0, b = 0 ;
        while(dup!= 1) {
            if (dup%2 == 0) {
                dup /= 2;
                a++ ;
            }
            else if (dup%3==0) {
                dup/=3 ;
                b++ ;
            }
            else {
                break ;
            }
        }
        if (dup!= 1) {
            cout << -1 << endl ;
        } 
        else if(a>b) {
            cout << -1 << endl ;
        }
        else {
            cout << 2*b-a << endl ;
        }
    }
    return 0;
}