#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int accumulate(vector<int> &arr) {
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

void solve()
{
    int n, m; cin >> n >> m;
    vector<pair<int, int>> vp;
    int sum_x = 0, sum_y = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        for (int j = 0; j < m; ++j) {
            if (s[j] == '#') {
                vp.push_back(make_pair(i + 1, j + 1));
                sum_x += i + 1;
                sum_y += j + 1;
            }
        }
    }
    int center_x = sum_x / vp.size();
    int center_y = sum_y / vp.size();
    cout << center_x << " " << center_y << "\n";

}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



