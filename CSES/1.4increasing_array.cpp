#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    LL n; cin >> n; 
    LL ar[n];
    for(int i = 0; i < n; ++i){
        cin >> ar[i];
    }

    LL res = 0; 
    for(int i = 1; i < n; ++i){
        if(ar[i - 1] > ar[i]){
            res+=(ar[i - 1] - ar[i]);
            ar[i] = ar[i - 1]; 
        }

    }

    cout << res; 


    return 0; 
}