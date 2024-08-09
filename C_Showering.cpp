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
    int n, s, m; cin >> n >> s >> m;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; ++i) {
        cin >> vp[i].first >> vp[i].second;
    }
    bool ok = false;
    if (vp[0].first >= s) ok = true;
    for (int i = 1; i < n; ++i) {
        if (vp[i].first - vp[i-1].second >= s) ok = true;
    }
    if (m - vp[n-1].second >= s) ok = true;
    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



