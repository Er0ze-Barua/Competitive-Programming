#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int max_segment = 0;
        int current = 0;
        int total_dots = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                current++;
                total_dots++;
                max_segment = max(max_segment, current);
            } else {
                current = 0;
            }
        }

        if (max_segment >= 3)
            cout << 2 << endl;
        else
            cout << total_dots << endl;
    }

    return 0;
}