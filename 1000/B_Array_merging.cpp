#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t;
    cin >> t ;
    while (t--) {
        int n;
        cin>> n ;
        vector<int> a(n);
        vector<int> b(n) ;

        for (int i = 0 ; i< n ; i++) {
            cin>>a[i];
        }
        for (int i =0 ; i<n ; i++) {
            cin>>b[i];
        }

        unordered_map<int,int> A, B ;
        int curr_a = a[0] ;
        int count_a = 1 ;
        for (int i = 1 ; i< n ; i++) {
            if (a[i] == curr_a) {
                count_a++ ;
            }
            else{
                if(A.find(curr_a) != A.end()) {
                    A[curr_a] = max(A[curr_a] , count_a) ;
                }
                else {
                    A[curr_a] = count_a ;
                }
                curr_a = a[i] ;
                count_a = 1 ;
            }
        }
        if(A.find(curr_a) != A.end()) {
            A[curr_a] = max(A[curr_a] , count_a) ;
        }
        else {
            A[curr_a] = count_a ;
        }

        int curr_b = b[0] ;
        int count_b = 1 ;
        for (int i = 1 ; i< n ; i++) {
            if (b[i] == curr_b) {
                count_b++ ;
            }
            else{
                if(B.find(curr_b) != B.end()) {
                    B[curr_b] = max(B[curr_b] , count_b) ;
                }
                else {
                    B[curr_b] = count_b ;
                }
                curr_b = b[i] ;
                count_b = 1 ;
            }
        }
        if(B.find(curr_b) != B.end()) {
            B[curr_b] = max(B[curr_b] , count_b) ;
        }
        else {
            B[curr_b] = count_b ;
        }
        
        unordered_map<int,int> C;
        C = A ;
        for (auto& pair:B) {
            if (C.find(pair.first) != C.end()){
                C[pair.first] += pair.second ;
            }
            else{
                C[pair.first] = pair.second ; 
            }
        }

        int ans = INT_MIN ;
        for (auto&pair:C) {
            ans = max(ans , pair.second) ;
        }
        cout << ans << endl; 
    }
}