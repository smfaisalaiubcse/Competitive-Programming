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
    int a; cin >> a;
    for (int i = 1; i <= a * a; i++) {
        if ((a * a) % (a + i) == 0) {
            cout << i << endl;
            return;
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
