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
    int n, x;
    cin >> n >> x;

    vector <int> v(n+2);
    v[0] = 0;
    for (int i = 1; i <= n; i++ ) {
        cin >> v[i];
    }
    v[n + 1] = x;

    int mx = INT_MIN;
    for (int i = 1; i <= n+1; i++) {
        int val = v[i] - v[i - 1];
        if (i == n+1)
            val *= 2;

        mx = max(mx, val);
    }
    cout << mx << nl;
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