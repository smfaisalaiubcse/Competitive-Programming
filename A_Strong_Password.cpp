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
    string s; cin >> s;
    string ans = "";
    ans += s[0];
    bool ok = false;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i - 1] and !ok) {
            if(s[i] == 'z') ans += s[i] - 1;
            else ans += s[i] + 1;
            ok = true;
        }
        ans += s[i];
    }
    if(!ok) {
        if(ans[s.size() - 1] == 'z')ans += ans[s.size() - 1] - 1;
        else ans += ans[s.size() - 1] + 1;
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



