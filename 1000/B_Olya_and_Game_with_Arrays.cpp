#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t ;
    while (t--) {
        int n ;
        cin >> n ;
        vector<vector<int>> total;
        for (int i = 0 ; i< n ; i++) {
            vector<int> temp;
            int m ;
            cin >> m ;
            for (int j = 0 ; j<m ;j++) {
                int x ;
                cin >> x ;
                temp.push_back(x) ;
            }
            sort(temp.begin() , temp.end()) ;
            total.push_back(temp) ;
            temp.clear();
        }

        long long min_first = LLONG_MAX ;
        long long sum_second = 0 ;
        long long min_second = LLONG_MAX;

        for (int i = 0 ; i<n ; i++) {
            min_first = min(min_first,(long long) total[i][0]) ;
            sum_second += (long long)total[i][1] ;
            min_second = min(min_second , (long long)total[i][1]) ;
        }

        long long ans = min_first + sum_second - min_second ;
        cout << ans << endl;
    }
    return 0 ;
}