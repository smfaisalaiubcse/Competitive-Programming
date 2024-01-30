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
    char arr[n][n];
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            mp[arr[i][j]]++;
        }
    if (mp.size() == 2) {
        map<char, int> leftD;
        for (int i = 0; i < n; ++i) leftD[arr[i][i]]++;
        map<char, int> rightD;
        for (int i = 0; i < n; ++i) rightD[arr[i][n - 1 - i]]++;
        if (leftD.size() == 1 and rightD.size() == 1) {
            int onlyKey;
            for (const auto &entry : rightD) onlyKey = entry.first;
            if (mp[onlyKey] == (2 * n - 1)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
