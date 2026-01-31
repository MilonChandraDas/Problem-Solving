#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

int main() {
    fastio();
    int n;
    cin >> n;

    int mn = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        mn = min(mn, abs(x));
    }

    cout << mn << nl;
    return 0;
}