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
    string s; cin >> s;
    int ans = 0;
    int count = 1; 
    for (int i = 0; i < n - 1 ; i++)
    {
        if (s[i] != s[i + 1]) count++;
        else
        {
            ans += floor(count / 3.0);
            count = 1; 
        }
    }
    ans += floor(count / 3.0);
    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



