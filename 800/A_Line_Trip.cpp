#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        int diff = nums[0];

        for (int i = 1; i < n; i++) {
            diff = max(diff, nums[i] - nums[i - 1]);
        }

        diff = max(diff, 2 * (x - nums[n - 1]));

        cout << diff << endl;
    }

    return 0;
}