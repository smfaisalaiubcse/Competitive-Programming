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

void solve() {
    int xc, yc, k; cin >> xc >> yc >> k;
    vector<pair<int, int>> vp;
    if (k % 2 == 1) vp.push_back({xc, yc});
    for (int i = 0; i < k / 2; ++i) {
        vp.push_back({xc - (i + 1), yc - (i + 1)});
        vp.push_back({xc + (i + 1), yc + (i + 1)});
    }
    for (auto& i : vp) cout << i.first << " " << i.second << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



