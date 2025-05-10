#include <bits/stdc++.h>

using namespace std;

int max_rep(string s){
    int res = 1, cur_res = 1; 
    char cur_char = s[0]; 
    for(int i = 1; i < s.size(); ++i){
        
        if (cur_char == s[i]){
            cur_res++; 
        }
        else{
            res = max(cur_res, res); 
            cur_res = 1;

        }
        cur_char = s[i]; 

    }
    return max(res, cur_res);

}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    string s; 
    cin >> s;

    cout << max_rep(s);
    return 0;
}