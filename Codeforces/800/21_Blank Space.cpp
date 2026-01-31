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

    vector<int> v(n);
    int cnt = 0;
    int mx = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] == 0) {
            cnt++;
            mx = max(cnt, mx);
        }
            
        else {
            mx = max(cnt, mx);
            cnt = 0;
        }
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