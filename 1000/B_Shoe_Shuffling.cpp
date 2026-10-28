#include <bits/stdc++.h>
using namespace std;

void solve_by_eroze() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = i + 1;
    }

    int first = 0;
    while (first < n) {
        int last = first;

        while (last < n && nums[last] == nums[first]) {
            last++;
        }

        if (last - first == 1) {
            cout << -1 << endl;
            return;
        }

        for (int i = first; i < last - 1; i++) {
            ans[i] = i + 2;
        }

        ans[last - 1] = first + 1;

        first = last;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve_by_eroze();
    }

    return 0;
}
