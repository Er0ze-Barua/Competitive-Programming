#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<pair<long long,int>> ans;
        for (int i = 0; i < n; i++) {
            long long rem = nums[i] % k;
            if (rem == 0) rem = k;
            ans.push_back({rem, i});
        }

        sort(ans.begin(), ans.end(), [](pair<long long,int> a, pair<long long,int> b){
            if (a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

        for (int i = 0; i < n; i++) {
            cout << ans[i].second + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}