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
    string s; cin >> s;
    for (int i = 1; i <= 8; i++)
        if(s[1] - '0' != i) cout << s[0] << i << endl;
    for (char i = 'a'; i <= 'h'; i++)
        if(i != s[0]) cout << i << s[1] << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



