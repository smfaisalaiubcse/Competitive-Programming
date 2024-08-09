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

void solve() {
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> indices(m);
    for (int i = 0; i < m; ++i) {
        cin >> indices[i];
    }
    sort(all(indices));
    string c;
    cin >> c;
    sort(all(c));
    vector<pair<int, char>> vp(m);
    for (int i = 0; i < m - 1; i++)
    {
        if(indices[i] == indices[i + 1]) {
            vp[i].first = indices[i];
            vp[i].second = c.back();
            c.pop_back();
        } 
    } 
    sort(rall(c));
    for (int i = 0; i < m ; i++)
    {
        if(!vp[i].first) {
            vp[i].first = indices[i];
            vp[i].second = c.back();
            c.pop_back();
        } 
    } 
    for (int i = 0; i < m; i++)
    {
        s[vp[i].first - 1] = vp[i].second; 
    }
    cout << s << endl;
}


int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



