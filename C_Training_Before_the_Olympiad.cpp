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
    for (auto &i : a)
        cin >> i;
    int s = 0, odd = 0, evn = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        odd += (a[i] & 1);
        evn += (!(a[i] & 1));
        if (i == 0)
            cout << s << " ";
        else
            cout << s - (odd / 3) - (odd % 3 == 1) << " ";
    }
    cout << '\n';
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}