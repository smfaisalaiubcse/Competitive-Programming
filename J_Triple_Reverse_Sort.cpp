#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
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
    vector<int> arr(n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == i % 2)  ok = false;
    }
    (ok)? cout << "YES" << endl : cout << "NO" << endl; 
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



