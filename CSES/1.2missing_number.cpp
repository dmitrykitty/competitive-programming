#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);


    int n;
    cin >> n;
    int nums[n + 1]{};
    int num;

    for (int i = 1; i < n; ++i) {
        cin >> num;
        nums[num] = num;
    }

    for (int i = 1; i <= n + 1; ++i) {
        if (nums[i] == 0) {
            cout << i;
            break;
        }
    }
}