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
    vector<int> pref(n);
    map<int, int> mp;
    mp[0]=1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == 0) pref[0] = arr[0];
        else {
            if(i % 2) pref[i] = pref[i - 1] - arr[i];
            else pref[i] = pref[i - 1] + arr[i];
        }
        mp[pref[i]]++;
    }
    for(auto i:mp) {
        if(i.second > 1) {cout << "YES" << endl; return;}
    }
    cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



