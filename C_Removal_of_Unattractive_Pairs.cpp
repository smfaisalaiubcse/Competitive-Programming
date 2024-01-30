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
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]]++;
    int cnt = 0;
    for (int i = 'a'; i <= 'z'; i++)
        cnt = max(cnt, mp[i]);
    if (cnt > n / 2) 
        cout << 2 * cnt - n << endl;
    else if (n % 2) cout << 1 << endl; 
    else 
        cout << 0 << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



