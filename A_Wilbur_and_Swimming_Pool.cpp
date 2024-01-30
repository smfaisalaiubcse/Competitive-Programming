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
    vector<pair<int, int>> vertices;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        vertices.push_back({x, y});
    }
    int a = 0, b = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n; j++)dd vertices[i].second != vertices[j].second)
            {
                a = abs(vertices[i].first - vertices[j].first);
                b = abs(vertices[i].second - vertices[j].second);
            }
        }
    }
    if (a * b <= 0)
        cout << -1 << endl;
    else
        cout << a * b << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
