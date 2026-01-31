#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define yes cout << "First" << nl
#define no cout << "Second" << nl

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int x = a + c;
    int y = b + c;

    if (x == y) {
        if (c % 2 != 0)
            yes;
        else
            no;
    }
    else if (x > y)
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