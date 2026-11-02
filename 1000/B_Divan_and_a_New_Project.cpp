
#include <bits/stdc++.h>
using namespace std;

void solve_by_eroze() {
    int n;
    cin >> n;

    vector<pair<int, int>> a;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        a.push_back({x, i});
    }

    sort(a.rbegin(), a.rend());

    vector<int> ans(n + 1, 0);
    ans[0] = 0;

    long long total = 0;
    int pos = 1;

    for (int i = 0; i < n; i++) {
        int count = a[i].first;
        int idx = a[i].second;

        if (i % 2 == 0) {
            ans[idx] = pos;
        } else {
            ans[idx] = -pos;
            pos++;
        }

        total += 2LL * count * abs(ans[idx] - ans[0]);
    }

    cout << total << '\n';

    for (int i = 0; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve_by_eroze();
    }
}
