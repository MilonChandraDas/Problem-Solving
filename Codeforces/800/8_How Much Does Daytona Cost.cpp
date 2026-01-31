#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using dl = double;

constexpr char nl = '\n';
constexpr int MOD = 1e9 + 7;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define yes cout << "YES" << nl
#define no cout << "NO" << nl

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] == k)
            ok = 1;
    }

    if (ok)
        yes;
    else
        no;
}

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}