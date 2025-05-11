#include <bits/stdc++.h>
#define LL long long
using namespace std;


int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    LL y, x; 
    int t; 

    cin >> t; 
    for(int i = 0; i < t; i++){
        cin >> x >> y; 
        LL res; 

        if(y > x)
            if(y % 2)
                res = y * y - x + 1; 
            else
                res = (y - 1)*(y - 1) + x; 

        else if(x > y)
            if(x % 2)
                res = (x - 1)*(x - 1) + y; 
            else
                res = x * x - y + 1; 
        else 
            res = (x * x + (x - 1)*(x - 1) + 1)/2; 

        cout << res << "\n";
    }
    
    return 0; 
}