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

int n;
string s[2];

int fun(int i, int j) {
    if(j == n) return 1;
    if(s[i][j] == 'W') return 0;
    if(s[1 - i][j] == 'B') return fun(1 - i, j + 1);
    return fun(i, j + 1);
}

void solve()
{
    cin >> n;
    cin >> s[0] >> s[1];
    if(fun(0, 0) or fun(1, 0)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



