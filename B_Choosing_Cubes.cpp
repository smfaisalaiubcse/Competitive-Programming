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
    int n, f, k; cin >> n >> f >> k;
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++) {cin >> arr[i].first; arr[i].second = i; }
    int fav = arr[f - 1].first;
    sort(rall(arr));
    string msg = "NO";
    for (int i = 0; i < k; i++)
    {
        if(arr[i].first == fav) { msg = "YES"; break;}
    }
    if(arr[k].first == fav and msg == "YES") msg = "MAYBE";
    cout << msg << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



