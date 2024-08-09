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
    vector<int> arr(k);
    for (int i = 0; i < k; i++) cin >> arr[i];
    sort(all(arr));
    int op = 0;
    for (int i = 0; i < k - 1; i++)
    {
        if(arr[i] > 1) op += arr[i] + arr[i] - 1;
        else op += 1;
    }
    cout << op << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



