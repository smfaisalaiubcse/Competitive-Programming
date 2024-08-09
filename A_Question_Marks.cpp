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

int accumulate(vector<int> &arr) {
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    map<char, int> mp;
    for (int i = 0; i < 4 * n; i++)
    {
        if(s[i] != '?') mp[s[i]]++;
    }
    int ans = 0;
    for(auto i : mp) {
        // cout << i.first << " " << i.second << " " << min(n, i.second) <<  endl;
        ans += min(n, i.second);
    }
    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



