#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
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
    int n, i, j, x, y, m, ans = 0;
    cin >> n >> m;
    int a[n + 3], b[m + 4];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    for (i = 1; i <= m; i++)
        cin >> b[i];
    sort(b + 1, b + m + 1);
    sort(a + 1, a + n + 1);
    i = 1;
    j = m;
    int l = 1, r = n;
    while (l <= r)
    {
        x = abs(a[r] - b[i]);
        y = abs(a[l] - b[j]);
        if (x > y)
        {
            ans += x;
            i++;
            r--;
        }
        else
        {
            ans += y;
            l++;
            j--;
        }
    }
    cout << ans << endl;
}

/*
4 6
1 2 4 6
3 5 1 7 2 3
7 5 3 3 2 1

1 2 4 6
7 5 2 1 =6+3+2+5


1 2 3 4 5
5 4 1 2 3
*/

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
