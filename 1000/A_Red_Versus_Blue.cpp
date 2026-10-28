
#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze() {
    int n, r, b;
    cin >> n >> r >> b;

    string ans = "";

    while (b > 0) {
        int temp = (r + b) / (b + 1);

        while (temp--) {
            ans.push_back('R');
            r--;
        }

        ans.push_back('B');
        b--;
    }

    while (r > 0) {
        ans.push_back('R');
        r--;
    }

    cout << ans << '\n';
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        solve_by_eroze();
    }
}
