#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    int x,y,z ;
    cin >> x >>y >> z ;
    int total = x+y+z ;
    char c ;
    if (z>=x && z>=y) {
        c = 'S' ;
    }
    else if (x>=y) {
        c = 'P' ;
    }
    else {
        c = 'R' ;
    }
    for (int i =0 ; i<total;i++) {
        cout << c ;
    }
    cout << endl ;
}

int main(){
    int test;
    cin >> test ;
    while(test--){
        solve_by_eroze();
    }
}