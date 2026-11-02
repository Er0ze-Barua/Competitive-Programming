#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long a, b;
    cin >> a >> b;

    long long curr_xor;

    long long n = a - 1;

    if (n % 4 == 0) curr_xor = n;
    else if (n % 4 == 1) curr_xor = 1;
    else if (n % 4 == 2) curr_xor = n + 1;
    else curr_xor = 0;

    if (curr_xor == b) {
        cout << a << endl;
        return;
    }

    long long need = curr_xor ^ b;

    if (need != a) {
        cout << a + 1 << endl;
    }
    else {
        cout << a + 2 << endl;
    }
}

int main(){
    int test;
    cin >> test;

    while(test--) {
        solve_by_eroze();
    }

    return 0;
}
