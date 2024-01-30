#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
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
    string s;
    cin >> s;
    string a, b;
    a.push_back(s[0]);
    bool ok = false;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] != '0' and !ok)
        {
            ok = true;
        }
        if (ok)
            b.push_back(s[i]);
        else
            a.push_back(s[i]);
    }
    if (a == "" or b == "")
    {
        cout << -1 << endl;
        return;
    }
    if (stoi(a) >= stoi(b))
        cout << -1 << endl;
    else
        cout << a << " " << b << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
