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
    int n; cin >> n;
    vector<int> arr(n);
    vector<int> ind;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < i + 1) ind.push_back(i + 1);
    }
    int ans = 0;
    for(auto i:ind) {
        ans += lower_bound(all(ind), arr[i - 1]) - ind.begin();
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



