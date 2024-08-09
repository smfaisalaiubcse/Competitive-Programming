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

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            while (i < s.length() and s[i] == '0') i++;
            temp += '0';
            i--;
        }
        else temp += '1';
    }

   if(count(all(temp), '1') > count(all(temp), '0')) cout << "Yes" << endl;
   else cout << "No" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
