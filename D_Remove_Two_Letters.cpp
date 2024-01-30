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
    int n; cin >> n;
    string s, ss; cin >> s;
    for (int i = 2; i < n; i++) ss.push_back(s[i]);
    int cnt = 1;
    for (int i = 0; i < n - 2; i++) if(s[i] != ss[i]) cnt++;
    cout << cnt << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



