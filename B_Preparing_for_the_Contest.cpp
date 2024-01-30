#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
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
    int n, k; cin >> n >> k;
    for (int i = n - k; i > 0; i--) cout << i << " ";
    for (int i = n - k + 1; i <= n; i++) cout << i << " ";
    cout << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



