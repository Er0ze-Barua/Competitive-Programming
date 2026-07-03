#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin >> t;
    while(t--) {
        long long a,b,xk,yk,xq,yq ;
        cin >> a>>b>>xk>>yk>>xq>>yq ;
        set<pair<long long, long long>> king;
        set<pair<long long, long long>> queen;
    vector<pair<long long,long long>> moves = {{ a, b}, { a,-b}, {-a, b}, {-a,-b},{ b, a}, { b,-a}, {-b, a}, {-b,-a} };

        for (int i =0 ; i< 8 ; i++){
            long long first_ele = moves[i].first;
            long second_ele = moves[i].second ;
            king.insert({xk+first_ele , yk+second_ele});
            queen.insert({xq+first_ele , yq+second_ele}) ;
        }
        int count = 0 ;
        for (auto num:king){
            if(queen.count(num)){
                count++ ;
            }
        }
        cout << count << endl ;
    }
    return 0 ;
}