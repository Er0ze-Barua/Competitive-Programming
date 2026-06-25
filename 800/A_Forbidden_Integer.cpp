#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a ;
    while(a--) {
        int n , k ,x ;
        cin >> n >> k >> x ;
        int count = 0 ;
        if (x!= 1) {
            cout <<"YES"<<endl ;
            count = n;
            cout <<count <<endl ;
            for (int i =0 ; i< n; i++) {
                cout <<"1 " ;
            }
            cout << endl ;
        }
        else {
            if (k==1) {
                cout << "NO" << endl;
            }
            else if (k>=2 && n%2==0) {
                cout <<"YES" << endl ;
                count = n/2 ;
                cout <<count << endl ;
                for (int i = 0 ; i< count ; i++) {
                    cout <<"2 " ;
                }
                cout <<endl ;
            }
            else if (k>=3 and n%2==1) {
                cout <<"YES" << endl ;
                 int count = 1 + (n - 3) / 2;
                    cout << count << endl;

                    cout << 3 << " ";

                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << endl;
            }
             else {
                    cout << "NO" << endl;
                }

        }
    }
    return 0 ;
}