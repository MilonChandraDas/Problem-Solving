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

    string s;
    cin >> s;

    int cnt = 0, dot = 0;
    for (auto i : s) {
        if (i == '.') {
            cnt++, dot++;
            if (cnt== 3) {
                dot = 2;
                break;
            }
        }
        else {
            cnt = 0;
        }
    }

    if (cnt == 3)
        cout << dot << nl;
    else
        cout << dot << nl;
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