#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

void solve() 
{
    int n, x, y;
    cin >> n >> x >> y;
    int ans = 0;
    if (y >= 3)
    {
        ans += min(x, y / 3);
        x -= min(x, y / 3);
        y /= 3;
    }
    ans += x / 2;
    if (ans >= n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
