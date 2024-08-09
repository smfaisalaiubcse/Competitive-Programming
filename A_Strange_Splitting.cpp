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
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> unique_elements;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        unique_elements.insert(a[i]);
    }

    if (unique_elements.size() == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        string s(n, 'B');
        s[1] = 'R';
        cout << s << endl;
    }
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
