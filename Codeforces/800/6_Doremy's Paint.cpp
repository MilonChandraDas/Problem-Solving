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
    map<int, int> cnt;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cnt[a]++;
    }

    bool done = 0;
    if (cnt.size() == 1)
        done = 1;
    else if (cnt.size() == 2) {
        auto n1 = cnt.begin();
        auto n2 = cnt.begin();
        n2++;

        if (n1->second == n2->second || abs(n1->second - n2->second) == 1)
            done = 1;
    }

    if (done)
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