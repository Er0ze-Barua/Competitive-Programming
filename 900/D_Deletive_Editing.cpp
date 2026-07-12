#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'A']++;
        }

        int i = n - 1;
        int j = m - 1;

        bool flag = true;

        while (i >= 0 && j >= 0) {

            if (s[i] == t[j]) {
                freq[s[i] - 'A']--;
                i--;
                j--;
            }
            else {
                freq[s[i] - 'A']--;

                if (freq[s[i] - 'A'] > 0) {
                    i--;
                }
                else {
                    flag = false;
                    break;
                }
            }
        }

        if (j >= 0)
            flag = false;

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}