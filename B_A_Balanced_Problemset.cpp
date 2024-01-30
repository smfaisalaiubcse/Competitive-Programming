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
    int x, n; cin >> x >> n;
    vector<int> divisors;
    for (int i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            divisors.push_back(i);
            if (i != x / i) {
                divisors.push_back(x / i);
            }
        }
    }
    sort(all(divisors));
    for (int i = divisors.size() - 1; i >= 0; i--)
    {
        if(divisors[i] <= x / n) {
            if(divisors[i] > x / n) cout << --divisors[i] << endl;
            else cout << divisors[i] << endl; return;
        }
    }
    cout << divisors[0] << endl;
    for(auto i:divisors) cout << i << " ";
    cout << endl;
}
//1 2 5 10
int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



