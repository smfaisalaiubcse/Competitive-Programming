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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    if(count(all(arr), 0) == n) cout << 0 << endl;
    else if(k == 1) {
        for (int i = 0; i < n; i++) arr[i] &= 1;
        if(count(all(arr), 0) == n) cout << 1 << endl;
        else cout << -1 << endl;
    } else {
        bool ok = false;
        for (int i = 0; i < 31; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if((arr[j] & (1 << i)) == 0) count++;
            }
            if(count == n and k >= (1 << i)) {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    } 
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}