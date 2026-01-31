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
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        yes;
        cout << n << nl;
        for (int i = 1; i <= n; i++)
            cout << 1 << " ";
        cout << nl;
    }
    else if (k == 1 || (k==2 && n%2==1) )
        no;
    else {
        yes;
        cout << n / 2 << nl;
        for (int i = 1; i < n / 2;i++)
            cout << 2 << " ";
        cout << 2 + (n % 2) << nl;
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