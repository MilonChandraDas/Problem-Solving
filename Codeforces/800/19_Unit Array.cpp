#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve() {
    int x;
    cin >> x;

    int p = 0, n = 0;
    for (int i = 1; i <= x; i++) {
        int a;
        cin >> a;

        if (a == 1)
            p++;
        else
            n++;
    }

    int cnt = 0;
    while (n > p || (n%2 == 1)) {
        n--, p++;
        cnt++;
    }

    cout << cnt << nl;
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