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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    vector<bitset<31>> b(n);
    for (int i = 0; i < n; i++) {
        bitset<31> temp(arr[i]);
        b[i] = temp;
    }
    int ans = 0;
    for (int i = 30; i >= 0; i--)
    {
        int req = 0;
        for (int j = 0; j < n; j++) req += (b[j][i] == 0);
        if(req <= k) {
            k -= req;
            ans += (1 << i);
        }
    }
    cout << ans << endl;    
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



