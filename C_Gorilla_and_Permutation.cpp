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
    int n, m, k; cin >> n >> m >> k;
    vector<int> ans(n);
    int ind = 0;
    for (int i = n; i > m; i--) ans[ind++] = i;
    for (int i = 1; i <= m; i++) ans[ind++] = i;
    for (int i = 0; i < ind; i++) cout << ans[i] << " ";
    cout << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



