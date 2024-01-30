#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long ll;
#define all(x) x.begin(), x.end()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

bool check_perSquare(ll n)
{
    double x = sqrt(n);
    return x == static_cast<ll>(x);
}
void solve()
{
    ll n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll ans =  accumulate(all(arr), (ll)0);
    if (check_perSquare(ans)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
