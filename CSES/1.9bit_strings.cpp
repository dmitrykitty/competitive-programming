#include <bits/stdc++.h>
#define LL long long
using namespace std;

LL get_permutations(int n){
    LL res = 1; 
    while(n){
        res <<= 1;
        res %= 1000000007; 
        n--; 
    }

    return res;
}


int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; 
    cin >> n; 

    cout << get_permutations(n);

    return 0;
}