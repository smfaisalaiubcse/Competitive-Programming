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
    string s; cin >> s;
    map<char, int> freq;
    for (int i = 0; i < n; i++) freq[s[i]]++;
    int count = 0;
    for(auto i:freq) if(i.second >= (i.first - 64)) count++;
    cout << count << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



