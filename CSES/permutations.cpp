#include <bits/stdc++.h>
using namespace std;

void helper(int n){
    if(n == 1){
        cout << n; 
        return;
    }
    if(n == 2){
        cout << "NO SOLUTION";
        return;
    }

    int ar[n];
    ar[0] = 2; 

    for(int i = 1; i < n; ++i){
        if(ar[i - 1] + 2 <= n){
            ar[i] = ar[i - 1] + 2;
            //cout << ar[i - 1];
        }
        else if(ar[i - 1] - (ar[0] - 1) < 2){
            cout << "NO SOLUTION";
            return;
        }
        else{
            
            ar[i] = ar[0] - 1;
            //cout << ar[i - 1]; 
        }
    }

    
    for(int i = 0; i < n; ++i)
            cout << ar[i] << " ";


}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n; 
    cin >> n; 



    helper(n);

    return 0; 

}

    
