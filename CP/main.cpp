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
    string s; getline(cin, s); 
    for (int i = 0; i < s.size(); i++) if(s[i] == '<') cout << s[i + 1];    
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}



