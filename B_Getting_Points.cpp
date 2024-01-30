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
    int t_days, m_point, class_point, lab_point;
    cin >> t_days >> m_point >> class_point >> lab_point;
    int total_lab = (t_days + 6) / 7;
    int l = 1, r = t_days;
    int ans = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int get = m * class_point + lab_point * min(2 * m, total_lab); 
        if (m_point <= get)
        {
            ans = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    cout << t_days - ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
