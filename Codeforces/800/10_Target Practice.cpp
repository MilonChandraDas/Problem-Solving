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
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            char c;
            cin >> c;

            if (c == 'X') {
                if (i == 1 || i == 10 || j == 1 || j == 10)
                    sum += 1;
                
                else if (i == 2 || i == 9 || j == 2 || j == 9)
                    sum += 2;
                
                else if (i == 3 || i == 8 || j == 3 || j == 8)
                    sum += 3;
                
                else if (i == 4 || i == 7 || j == 4 || j == 7)
                    sum += 4;
                
                else if (i == 5 || i == 6 || j == 5 || j == 6)
                    sum += 5;
                
            }
        }
    }
    cout << sum << nl;
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