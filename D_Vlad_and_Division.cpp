#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

string NumToBit(int x)
{
    string bits = "";
    while (x > 0)
    {
        char bit = '0' + (x % 2);
        bits += bit;
        x /= 2;
    }
    while (bits.size() < 31)
        bits += "0";
    return bits;
}

void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++) { cin >> arr[i]; mp[NumToBit(arr[i])]++; }
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        string reverse = "", main = NumToBit(arr[i]);
        if(!mp[main]) continue;
        for (int j = 0; j < 31; j++) main[j] == '1' ?  reverse += '0' : reverse += '1';
        if(mp[reverse]) {
            mp[reverse]--; mp[main]--; ans--;
        }
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
