#include <bits/stdc++.h>
using namespace std;

void weird_algo(long long x) {
    cout << x << " ";
    while (x != 1) {
        if (x % 2)
            x = x * 3 + 1;
        else
            x /= 2;
        cout << x << " ";
    }
}

int main() {
    long long x;
    cin >> x;
    weird_algo(x);
}
