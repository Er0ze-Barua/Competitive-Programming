#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> nums(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> nums[i];
            freq[nums[i]]++;
        }

        int max_count = 0;
        for (const auto &p : freq) {
            max_count = max(max_count, p.second);
        }

        int ans = 0;

        while (max_count < n) {
            ans++;
            int swaps = min(max_count, n - max_count);
            ans += swaps;
            max_count += swaps;
        }

        cout << ans << endl;
    }

    return 0;
}