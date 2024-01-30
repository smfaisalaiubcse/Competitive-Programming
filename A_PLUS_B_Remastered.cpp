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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    sort(all(a));
    sort(all(b));
    reverse(all(a));
    int c = a[0] + b[0];
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if ((a[i] + b[i])!= c)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int i : a)
            cout << i << " ";
        cout << endl;
        for (int i : b)
            cout << i << " ";
        cout << endl;
        return;
    }
    reverse(all(a));
    reverse(all(b));
    c = a[0] + b[0], flag = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] + b[i] != c)
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        for (int i : a)
            cout << i << " ";
        cout << endl;
        for (int i : b)
            cout << i << " ";
        cout << endl;
        return;
    }
    cout << -1 << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
