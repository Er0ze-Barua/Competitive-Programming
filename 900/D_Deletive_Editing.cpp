#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        string s, t;
        cin >> s >> t;

        vector<int> need(26, 0);
        for (char c : t) {
            need[c - 'A']++;
        }

        int j = t.size() - 1;
        bool ok = true;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (j >= 0 && s[i] == t[j]) {
                need[s[i] - 'A']--;
                j--;
            }
            else {
                if (need[s[i] - 'A'] > 0) {
                    ok = false;
                    break;
                }
            }
        }

        if (j >= 0) ok = false;

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}