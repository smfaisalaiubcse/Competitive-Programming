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

void calculatePrefixSum(vector<int>& arr, vector<int>& pref) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pref[i] = arr[i];
        } else {
            pref[i] = arr[i] + pref[i - 1];
        }
    }
}

void solve()
{
    int n, k; 
    cin >> n >> k;
    string s; 
    cin >> s;
    int mx = 0;
    for (int i = 0; i <= n - k; i++) mx = max(mx, std::count(s.begin() + i, s.begin() + i + k, 'B')); 
    cout << k - mx << endl;
}


// 0 1 2 3 4 5 6 7 8 9 
int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



