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

void calculatePrefixSum(vector<int> &arr, vector<int> &pref)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            pref[i] = arr[i];
        }
        else
        {
            pref[i] = arr[i] + pref[i - 1];
        }
    }
}

void solve()
{
    int x[4], y[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> x[i] >> y[i];
    }

    int side_length = max(abs(x[0] - x[2]), abs(y[0] - y[2]));
    int area = side_length * side_length;

    cout << area << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
