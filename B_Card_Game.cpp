#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

void solve() {
    int a1, a2, b1, b2; cin >> a1 >> a2 >> b1 >> b2;
    int ans = 0;
    if ((a1 > b1 and a2 > b2) or (a1 >= b1 and a2 > b2) or (a1 > b1 and a2 >= b2)) ans++;
    if ((a1 > b2 and a2 > b1) or (a1 >= b2 and a2 > b1) or (a1 > b2 and a2 >= b1)) ans++;
    if ((a2 > b1 and a1 > b2) or (a2 >= b1 and a1 > b2) or (a2 > b1 and a1 >= b2)) ans++;
    if ((a2 > b2 and a1 > b1) or (a2 >= b2 and a1 > b1) or (a2 > b2 and a1 >= b1)) ans++;
    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



