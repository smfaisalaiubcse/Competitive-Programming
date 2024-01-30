#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long ll;
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
    ll n;
    cin >> n;

    ll a[n + 1];

    ll odd_c = 0, even_c = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];

        if (a[i] % 2 == 0)
            even_c++;
        else
            odd_c++;
    }

    if (even_c % 2 == 0 || odd_c % 2 == 0)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        sort(a + 1, a + n + 1);

        ll flag = 0;
        for (ll i = 1; i < n; i++)
        {
            if (abs(a[i] - a[i + 1]) == 1 && ((a[i] % 2 == 0 && a[i + 1] % 2 != 0) || (a[i] % 2 != 0 && a[i + 1] % 2 == 0)))
            {
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
