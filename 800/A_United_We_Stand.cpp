#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        if (a[0] == a[n - 1]) {
            cout << "-1" << endl;
            continue;
        }

        vector<int> b, c;
        int max_ele = a[n - 1];

        for (int i = 0; i < n; i++) {
            if (a[i] == max_ele) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << endl;
        for (int i = 0; i < b.size(); i++) {
            cout << b[i] << (i == b.size() - 1 ? "" : " ");
        }
        cout << endl;
        for (int i = 0; i < c.size(); i++) {
            cout << c[i] << (i == c.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}