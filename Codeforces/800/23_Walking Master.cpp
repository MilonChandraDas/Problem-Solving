#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt = 0;

        while (b < d)
        {
            a++, b++;
            cnt++;
        }

        while (a > c)
        {
            a--;
            cnt++;
        }

        if ((a == c) && (b == d))
            cout << cnt << '\n';
        else
            cout << -1 << '\n';
    }
}