#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t--) {
        int n, m ;
        cin >> n >> m ;
        vector<int> degree(n+1,0) ;
        for (int i=0 ;i<m ;i++) {
            int u,v ;
            cin >> u >> v ;
            degree[u]++ ;
            degree[v]++ ;

        }

        bool isolated = false ;
        int maxdeg = 0;

        for (int i = 1 ; i<=n; i++) {
            if (degree[i] == 0) {
                isolated = true ;
            }
            maxdeg = max(maxdeg, degree[i]) ;
        }

        if (isolated) {
            cout <<"Brain Melt" << endl ;
        }
        else if(m ==n-1 && maxdeg == n-1) {
            cout << 2 << endl ;
        }
        else {
            cout << "Many" << endl;
        }
    }
    return 0 ;
}