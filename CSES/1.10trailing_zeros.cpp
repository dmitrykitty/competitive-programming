#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL get_zeros(LL n){
    LL res = n / 5;

    LL start_num = 25; 
    while(start_num <= n){
        for(LL i = start_num; i % 25 == 0; i /= 5)
            res++; 
        start_num += 25; 
    } 
    
    return res;
}




int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    LL n; 
    cin >> n; 

    cout << get_zeros(n);
}