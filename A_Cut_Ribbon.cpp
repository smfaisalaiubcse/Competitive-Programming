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
    vector<int> arr(3);
    for (int i = 0; i < 3; i++)
        cin >> arr[i];

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = 0; i <= n; i++)
    {
        if (dp[i] != -1)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i + arr[j] <= n)
                {
                    dp[i + arr[j]] = max(dp[i + arr[j]], dp[i] + 1);
                }
            }
        }
    }

    cout << dp[n] << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
