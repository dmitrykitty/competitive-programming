#include <bits/stdc++.h>
#define LL long long
using namespace std;

void is_pos(LL a, LL b){
    if(a == 0 && b == 0){
        cout << "YES" << "\n"; 
        return;
    }

    if(a == 0 || b == 0){
        cout << "NO" << "\n";
        return;
    }

    LL low = min(a, b); 
    LL high = max(a, b); 
    if((a + b) % 3 == 0 && high <= low * 2)
        cout << "YES" << "\n"; 
    else
        cout << "NO" << "\n";
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int t; 
    LL a, b; 

    cin >> t; 
    
    for(int i = 0; i < t; i++){
        cin >> a >> b;

        is_pos(a, b); 
    }

    return 0; 

}