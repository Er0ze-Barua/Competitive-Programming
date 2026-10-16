#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long p;

        cin >> n >> p;

        vector<pair<long long, long long>> people(n);

        for (int i = 0; i < n; i++) {
            cin >> people[i].first;
        }

        for (int i = 0; i < n; i++) {
            cin >> people[i].second;
        }

        sort(people.begin(), people.end(),
             [](const pair<long long, long long>& x,
                const pair<long long, long long>& y) {
                 return x.second < y.second;
             });

        long long ans = p;

        long long remaining = n - 1;

        for (int i = 0; i < n && remaining > 0; i++) {

            long long a = people[i].first;
            long long b = people[i].second;

            if (b >= p) {
                ans += remaining * p;
                remaining = 0;
                break;
            }

            long long canInform = min(a, remaining);

            ans += canInform * b;
            remaining -= canInform;
        }

        cout << ans << '\n';
    }

    return 0;
}