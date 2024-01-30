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
    int a, b;
    cin >> a >> b;
    int mx = max(a, b);
    int mn = min(a, b);
    if (a == b)
        cout << 0 << endl;
    else if ((mx % mn) == 0)
    {
        mx = mx / mn;
        int ans = 0;
        while (mx % 8 == 0)
        {
            mx /= 8;
            ans++;
        }
        while (mx % 4 == 0)
        {
            mx /= 4; ans++;
        }
        while (mx % 2 == 0)
        {
            mx /= 2; ans++;
        }
        if(mx != 1) {
            cout << -1 << endl;
            return;
        }
        else cout << ans << endl;
    }
    else
        cout << -1 << endl;
}


int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
