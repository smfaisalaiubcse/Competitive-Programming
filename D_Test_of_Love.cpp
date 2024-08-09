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
int dp[200005];
int rec(int i, int n, string &s, int m, int k) {
    if(i >= n) return 0;
    if(dp[i] != -1) return dp[i];
    if(s[i] == 'C') return INT_MAX;
    if(s[i] == 'W') return dp[i] = 1 + rec(i + 1, n, s, m, k);
    int jump = INT_MAX;
    for (int j = 1; j <= m; j++)
    {
        jump = min(jump, rec(i + j, n, s, m, k));
    }
    return dp[i] = jump;
}

void solve()
{
    int n, m, k; cin >> n >> m >> k;
    string s; cin >> s;
    s = "L" + s;
    n++;
    for (int i = 0; i < 200005; i++) dp[i] = -1;
    int required_swims = rec(0, n, s, m, k);
    if(required_swims <= k) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



