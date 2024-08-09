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

int is_local_maxima(vector<vector<int>>& arr, int i, int j, int n, int m) {
    int current = arr[i][j];
    int max_neighbor = LLONG_MIN;
    bool is_local_max = true;

    if (i > 0) {
        max_neighbor = max(max_neighbor, arr[i - 1][j]);
        if (arr[i - 1][j] >= current) is_local_max = false;
    }
    if (i < n - 1) {
        max_neighbor = max(max_neighbor, arr[i + 1][j]);
        if (arr[i + 1][j] >= current) is_local_max = false;
    }
    if (j > 0) {
        max_neighbor = max(max_neighbor, arr[i][j - 1]);
        if (arr[i][j - 1] >= current) is_local_max = false;
    }
    if (j < m - 1) {
        max_neighbor = max(max_neighbor, arr[i][j + 1]);
        if (arr[i][j + 1] >= current) is_local_max = false;
    }

    return is_local_max ? max_neighbor : -1;
}


void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (is_local_maxima(arr, i, j, n, m) != -1)
                arr[i][j] = is_local_maxima(arr, i, j, n, m);
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
