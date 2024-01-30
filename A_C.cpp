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
    int a, b, c; cin >> a >> b >> c;
    int count = 0;
    while(1) {
        if(a > c or b > c) break;
        if(a > b) b += a;
        else a += b;
        count++;
    }
    cout << count << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}


// 5 9
// 14 9
// 14 23
