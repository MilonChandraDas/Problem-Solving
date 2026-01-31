#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        dq.push_back(s[i] - '0');
    }

    while (!dq.empty())
    {
        if (dq[0] != dq[dq.size() - 1])
        {
            dq.pop_front();
            dq.pop_back();
        }
        else
            break;
    }

    cout << dq.size() << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}