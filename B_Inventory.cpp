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
    ll i, j, k;
    ll n, x;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    vector<ll> v;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > n)
            v.push_back(i);
        else if (mp[a[i] - 1])
            v.push_back(i);
        else
            mp[a[i] - 1] = 1;
    }
    for (i = 0; i < n; i++)
    {
        if (!mp[i])
        {
            j = v.back();
            v.pop_back();
            a[j] = i + 1;
        }
    }
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
}

int32_t main()
{
    IO;
    solve();

    return 0;
}
