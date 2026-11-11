#include<bits/stdc++.h>
using namespace std;

bool helper(long long n, long long original_n) {
    if (n<1) {
        return true ;
    }
    long long num = n ;
    long long digit = num%10 ;
    
    
    if (digit == 0 || original_n%digit == 0) {
        num = num/10 ;
        return helper(num,original_n);
    }
    else {
        return false;
    }

}
void solve_by_eroze(){
    long long n ;
    cin >> n ;
    long long num = n ;
    while(num){
        if (helper(num,num)){
            cout << num << "\n" ;
            return ;
        }
        num++;
    }
}

int main(){
    int test_c ;
    cin >> test_c ;
    while(test_c--) {
        solve_by_eroze();
    }
}