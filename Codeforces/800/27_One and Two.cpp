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
    int n;
    cin >> n;
    int two = 0, cnt = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 2)
            two++;
    }

    if (two % 2 == 1) {
        cout << -1 << nl;
    }
    else {
        for (int i = 0; i < n; i++) {
            if (v[i] == 2)
                cnt++;
            if (2*cnt == two) {
                cout << i+1 << nl;
                break;
            }
        }
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