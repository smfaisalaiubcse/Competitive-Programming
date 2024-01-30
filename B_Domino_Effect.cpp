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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'L')
        {
            for (int j = i - 1; j >= 0; --j)
            {
                if (s[j] != '.')
                {
                    if (s[j] == 'R')
                        if ((i + j) % 2 == 0)
                            cnt++;
                    j = -1;
                }
                else
                    s[j] = 'L';
            }
        }
        else if (s[i] == 'R')
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (s[j] != '.')
                {
                    if (s[j] == 'L')
                    {
                        if ((i + j) % 2 == 0)
                            cnt++;
                    }
                    i = j;
                    j = n + 1;
                }
                else
                    s[j] = 'R';
            }
        }
    }
    int remainingDominoes = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '.')
            remainingDominoes++;
    }
    cout << remainingDominoes + cnt << endl;
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}
