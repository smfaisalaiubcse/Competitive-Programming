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
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    int ma1 = a, mb1 = b, ma2 = a, mb2 = b;
    if((a - x) <= n) {
        ma1 = x;
        mb1 = max(y, (b - (n - (a - x))));
    }
    else {
        ma1 = a - n;
        mb1 = b;
    }
    if(ma1 <= 0) ma1 = x; 
    if(mb1 <= 0) mb1 = y;
    if((b - y) <= n) {
        mb2 = y;
        ma2 = max(x, (a - (n - (b - y))));
    }
    else {
        mb2 = b - n;
        ma2 = a;
    }
    if(ma2 <= 0) ma2 = x; 
    if(mb2 <= 0) mb2 = y;
    cout << min(ma1*mb1, ma2*mb2) << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
