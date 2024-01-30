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
    map<int, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        int x, y; cin >> x >> y;
        mp[x]++; mp[y]++;
    }
    int count = 0;
    for(auto i:mp) {
        // cout << i.first << " " << i.second << endl;
        if(i.second == 1) count++;
    }
    // cout << count << endl;
    if(count % 2 and count > 2)
        cout << count / 2 + 1 << endl; 
    else {
        cout << count / 2 << endl;
    } 
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



