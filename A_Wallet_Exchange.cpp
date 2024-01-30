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
    int a, b; cin >> a >> b;
    (a + b & 1) ? cout << "Alice" << endl:cout << "Bob" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



