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

void solve1()
{
    int a = 0, b = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '0')
        {
            if (b)
                b--;
            else
            {
                cout << str.size() - i << endl;
                return;
            }
        }
        else
        {
            if (a)
                a--;
            else
            {
                cout << str.size() - i << endl;
                return;
            }
        }
    }

    cout << 0 << endl;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int numZeros = count(s.begin(), s.end(), '0');
    int numOnes = n - numZeros;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (numZeros)
                numZeros--;
            else
            {
                cout << n - i << endl;
                return;
            }
        }
        else
        {
            if (numOnes)
                numOnes--;
            else
            {
                cout << n - i << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}
// 011
// 10
int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
