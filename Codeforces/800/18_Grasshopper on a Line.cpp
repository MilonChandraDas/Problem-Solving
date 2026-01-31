#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int x, k;
    cin >> x >> k;

    if (x % k == 0) {
        cout << 2 << nl;
        cout << x - 1 << " " << 1 << nl;
    }
    else {
        cout << 1 << nl;
        cout << x << nl;
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}