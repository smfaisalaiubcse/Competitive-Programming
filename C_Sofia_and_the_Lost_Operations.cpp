#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int accumulate(vector<int> &arr)
{
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int m;
    cin >> m;
    vector<int> d(m);
    map<int, int> d_map;
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
        d_map[d[i]]++;
    }
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == d[m - 1])
            ok = true;
    }
    if (!ok)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (d_map[b[i]])
                d_map[b[i]]--;
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
