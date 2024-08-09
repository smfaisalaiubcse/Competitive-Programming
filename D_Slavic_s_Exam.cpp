#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int accumulate(vector<int> &arr)
{
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

bool subsequence(string t, string s)
{
    if (s == t)
        return true;
    int n = s.size();
    int m = t.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[j] == s[i])
            j++;
        if (j == t.size())
            return true;
    }
    return false;
}

void solve()
{
    string s, t; cin >> s >> t;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(j < t.size()) {
            if (s[i] == t[j]) j++;
            else if(s[i] == '?') {s[i] = t[j]; j++;}
        }
    }
    for (int i = 0; i < s.size(); i++) if(s[i] == '?') s[i] = 'a';
    
    if (j < t.size()) cout << "NO" << endl;
    else cout << "YES\n" << s << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
