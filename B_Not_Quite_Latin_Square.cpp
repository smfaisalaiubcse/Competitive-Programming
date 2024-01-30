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
    string s[3];
    for (int i = 0; i < 3; i++) cin >> s[i];
    map<char, int> mp;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            mp[s[i][j]]++;
    for(auto i:mp) if(i.second == 2) cout << i.first << endl;
}


int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
