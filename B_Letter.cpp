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
    string s1; getline(cin, s1);
    string s2; getline(cin, s2);
    map<char, int> mps1;
    map<char, int> mps2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != ' ') mps1[s1[i]]++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] != ' ') mps2[s2[i]]++;
    }
    for (auto i : mps2)
    {
        if (i.second > (mps1[i.first]))
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
