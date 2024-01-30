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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    char prev = '.';
    for (int i = 0; i < n; i++)
    {
        if (!(s[i] == 'a' || s[i] == 'e') && (s[i + 1] == 'a' || s[i + 1] == 'e') and i != 0)
            ans.push_back('.');
        ans.push_back(s[i]);
    }
    if (ans.back() == '.')
        ans.pop_back();
    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
