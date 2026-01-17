#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

int main() {
    int n;
    cin >> n;

    int space = n-1, k = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) cout << "  ";
        for (int j = 1; j <= k; j++) cout << "* ";
        space--;
        k += 2;
        cout << nl;
    }
        return 0;
}