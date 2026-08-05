#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--) {
        long long a;
        cin >> a ;
        string s = to_string(a) ;
        int n = s.size() ;

        bool flag1 = false;
        bool flag2 = false ;
        int count1=0,count2 = 0 ;

        for (long long i =n-1 ;i>=0;i--) {
           if (s[i] == '0' && flag1 == false) {
            flag1 = true ;
           }
           else if (flag1 == true && (s[i] == '0' || s[i]=='5')){
            cout << count1 << endl ;
            break;
           }
           else {
            count1++ ;
           }
           if (s[i]=='5' && flag2 == false) {
            flag2 = true ;
           }
           else if(flag2 == true &&(s[i]=='2'||s[i]=='7')){
            cout << count2 << endl ;
            break ;
           }
           else {
            count2++ ;
           }
        }
    }
    return 0 ;
}