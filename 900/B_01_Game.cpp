#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--) {
        string s;
        cin >> s;
        int z =0, o=0;
        for (int i = 0 ; i< s.size() ; i++) {
            if (s[i] == '1') {
                o++ ;
            }
            else {
                z++ ;
            }
        }
        if (min(z,o)%2 == 0) {
            cout <<"NET" <<endl ;
        }
        else {
            cout <<"DA" <<endl ;
        }
    }
    return 0 ;
}