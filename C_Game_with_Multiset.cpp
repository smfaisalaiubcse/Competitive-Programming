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
    vector<int> count(30, 0);
    for (int i = 0; i < n; i++) {
        int t, v; cin >> t >> v;
        if(t == 1) count[v]++;
        if(t == 2) {
            int j = 29;
            while(j >= 0) {
                if(count[j]) {
                    int k = v / pow(2, j);
                    int p = min(k, count[j]);
                    v -= p * pow(2, j);
                }
                j--;
            }
            if(v == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        } 
    }
    
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}



