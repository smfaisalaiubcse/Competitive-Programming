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

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    if (n == 1) {
        if (x == y) cout << "YES" << endl;
        else cout << "NO" << endl;
    } else {
        int sz = 0;
        for (int i = 0; i < 31; i++) {
            if ((x & (1 << i)) == 0 and (y & (1 << i)) != 0) {
                cout << "NO" << endl;
                return;
            } else if ((x & (1 << i)) != 0 and (y & (1 << i)) == 0) {
                sz++;
            }
        }
        if (n > 1 >> sz) cout << "NO" << endl;
        else cout << "YES" << endl;
    }   
}

// 2^i => pow(2, i);
// 1 << i => 2 ^ i;

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



