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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (arr[m] == x)
            {
                flag = true;
                break;
            }
            if (arr[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
        (flag)?cout << "YES" << endl:cout << "NO" << endl;
    }
}
int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
