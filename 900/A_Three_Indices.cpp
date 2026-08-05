#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> rightMinVal(n), rightMinIdx(n);

        rightMinVal[n - 1] = a[n - 1];
        rightMinIdx[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < rightMinVal[i + 1]) {
                rightMinVal[i] = a[i];
                rightMinIdx[i] = i;
            } else {
                rightMinVal[i] = rightMinVal[i + 1];
                rightMinIdx[i] = rightMinIdx[i + 1];
            }
        }

        int leftMinVal = a[0];
        int leftMinIdx = 0;

        bool found = false;

        for (int j = 1; j < n - 1; j++) {

            if (leftMinVal < a[j] && rightMinVal[j + 1] < a[j]) {
                cout << "YES\n";
                cout << leftMinIdx + 1 << " "
                     << j + 1 << " "
                     << rightMinIdx[j + 1] + 1 << "\n";
                found = true;
                break;
            }

            if (a[j] < leftMinVal) {
                leftMinVal = a[j];
                leftMinIdx = j;
            }
        }

        if (!found)
            cout << "NO\n";
    }

    return 0;
}