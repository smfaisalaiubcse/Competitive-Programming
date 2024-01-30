#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int a = 1e9, b = 1e9;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a > b) swap(a, b);
        if (arr[i] <= a or arr[i] <= b) {
            if (arr[i] <= a) a = arr[i];
            else b = arr[i];
        } else {
            a = arr[i];
            cnt++;
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
