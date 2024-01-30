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
    ll a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    vector<ll> dx = {-a, -a, a, a, b, b, -b, -b};
    vector<ll> dy = {-b, b, b, -b, a, -a, a, -a};

    set<pair<ll, ll>> dexK;
    set<pair<ll, ll>> dexQ;

    for (int i = 0; i < 8; i++)
    {
        dexK.insert({xk + dx[i], yk + dy[i]});
    }
    for (int i = 0; i < 8; i++)
    {
        dexQ.insert({xq + dx[i], yq + dy[i]});
    }

    int ans = 0;

    for (auto i : dexK)
    {
        if (dexQ.find(i) != dexQ.end())
        {
            ans++;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
