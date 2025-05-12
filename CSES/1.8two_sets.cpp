#include <bits/stdc++.h>
#define LL long long
using namespace std;




int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n; 
    cin >> n;

    LL sum{};  

    for(int i = 1; i <= n; ++i){
        sum += i; 
    }
    

    if(sum % 2 || n == 1){
        cout << "NO";
    } else {
        cout << "YES" << "\n";
        int first, second;
        if(n % 2) {
            first = n / 2; 
            second = n / 2 + 1; 
        } else {
            first = second = n / 2; 
        }

        cout << first << "\n"; 

        int j = 0, k = 1;

        for(int i = 0; i < first; ++i) {
             
            if(i % 2 == 0){
                cout << n - j << " " ;
                j++;
            } else{
                cout << k << " ";
                k++;
            }
        }

        cout << "\n" << second << "\n"; 
        for(int i = 0; i < second; ++i) {
            cout << k + i << " "; 
        }
        
    }

    return 0; 
}