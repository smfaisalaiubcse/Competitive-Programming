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

void calculatePrefixSum(vector<int>& arr, vector<int>& pref) {
    int n = arr.size();
    pref[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        pref[i] = arr[i - 1] + pref[i - 1];
    }
}

void solve()
{
    int n, k, x; cin >> n >> k >> x;
    vector<int> arr(n);
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));
    calculatePrefixSum(arr, pref);
    int res = INT_MIN;
    for (int i = n - k; i <= n; i++)
    {
            res = max(res, (pref[i] - 2 * (pref[i] - pref[max(i - x, (int)0)])));
    }
    if(n == k and res < 0) res = 0;
    (res == INT_MIN) ? cout << 0 << endl:cout << res << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



