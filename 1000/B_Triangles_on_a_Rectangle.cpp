#include<bits/stdc++.h>
using namespace std;

void solve_by_eroze(){
    long long w ,h ;
    cin >> w>> h ;
    vector<long long> bottom ,top ,left , right ;
    long long b ; 
    cin >> b ;
    while(b--) {
        long long temp;
        cin >> temp ;
        bottom.push_back(temp);
    }
    
    long t ; 
    cin >> t ;
    while(t--) {
        long long temp;
        cin >> temp ;
        top.push_back(temp);
    }

    long long l ; 
    cin >> l ;
    while(l--) {
        long long temp;
        cin >> temp ;
        left.push_back(temp);
    }

    long long r ; 
    cin >> r ;
    while(r--) {
        long long temp;
        cin >> temp ;
        right.push_back(temp);
    }

    long long diff_b = bottom[bottom.size()-1]-bottom[0];
    long long diff_t = top[top.size()-1]-top[0];
    long long diff_l = left[left.size()-1]-left[0];
    long long diff_r = right[right.size()-1]-right[0];

    long long horizontal = max(diff_b, diff_t) * h;
    long long vertical = max(diff_l, diff_r) * w;

    long long ans = max(horizontal,vertical) ;

    cout << ans << endl ;
}

int main(){
    int test ;
    cin >> test ;
    while(test--){
        solve_by_eroze();
    }
}