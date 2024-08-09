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
    string n; cin >> n;
    bool ok = false;
    int ans = 0;
    for (int i = 0; i < n.size() - 1; i++) {
        ans += (n[i] - '0');
        if (n[i] == '0') ok = true;
    }
    if ((n.find("01234") != string::npos && n.find("56789") != string::npos) or n[n.size() - 1] == '9' or n[0] != '1' or ans == 35 or n.size() % 10 == 0 or ok) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
