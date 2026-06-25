#include<bits/stdc++.h>
using namespace std ;

int main() {
    int a ;
    cin >> a ;
    while (a--) {
        int n ;
        cin >> n ;
        vector<int> ans ;
        int count = 0 ;
        for (int i = 0 ; i<n ; i++) {
            int x ;
            cin >> x ;
            ans.push_back(x);

            if (x%2 != 0) {
                count++ ;
            }
        }
        if (count%2 == 0) {
            cout <<"YES"<<"\n" ;
        }
        else {
            cout << "NO"<<"\n" ;
        }
    }
            return 0;

}