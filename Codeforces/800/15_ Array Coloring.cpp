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

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;

        if (a % 2 != 0) {
            sum++;
        }
    }

    if (sum % 2 == 0)
        yes;
    else
        no;
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