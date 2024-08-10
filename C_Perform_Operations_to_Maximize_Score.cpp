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

void op(vector<int> &a) {

}

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == 1) {
            a[i]++;
            int temp = a[i];
            sort(all(a));
            n--;
            ans = max(ans, temp + a[n / 2]);
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



