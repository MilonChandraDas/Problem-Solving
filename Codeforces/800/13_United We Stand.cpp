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
    int n; cin >> n;
    vector<int> v(n), b, c;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int v1 = v[0];

    int cnt = 0;
    for (auto i : v) {
        if (i == v1)
            cnt++;
    }

    if (v.size() != cnt) {
        for (auto i : v)
        {
            if (i == v1)
                b.push_back(i);
            else
                c.push_back(i);
        }

        cout << b.size() << " " << c.size() << nl;
        for (auto i : b)
            cout << i << " ";
        cout << nl;
        for (auto i : c)
            cout << i << " ";
        cout << nl;
    }
    else {
        cout << -1 << nl;
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