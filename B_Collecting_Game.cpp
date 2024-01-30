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
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(all(arr));
    vector<int> pref(n, 0);
    pref[0] = arr[0].first;
    for (int i = 1; i < n; i++) pref[i] = pref[i - 1] + arr[i].first;
    vector<int> ans(n);
    stack<int> dex;
    for (int i = 0; i < n; i++)
    {
        dex.push(arr[i].second);
        if(i == n - 1 or arr[i + 1].first > pref[i]) {
            while(!dex.empty()) {
                ans[dex.top()] = i;
                dex.pop();
            }
        }
    }
    for(auto i:ans) cout << i << " ";
    cout << endl;  
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



