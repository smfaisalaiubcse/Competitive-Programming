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
    // int n, x, y; cin >> n >> x >> y;
    // vector<int> arr(n);
    // for (int i = 0; i < n; i++) cin >> arr[i];
    // map<int, map<int, int>> mp;
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans += mp[(x - arr[i]) % x][arr[i] % y];
    //     mp[arr[i] % x][arr[i] % y]++;
    // }
    // cout << ans << endl;

    cout << (2 - (10 % 5)) % 5 << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}



