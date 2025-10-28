#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n) {
    int res = 0;
    while (n >= 5) {
        n /= 5;
        res += n;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}
