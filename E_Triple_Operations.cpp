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

int pre[200000];

void solve()
{
    int l, r; cin >> l >> r;
    int temp = l, extra = 0;
    while(temp) {
        temp /= 3;
        extra++;
    }
    extra = extra * 2;
    cout << extra + pre[r] - pre[l] << endl;
}

int32_t main()
{
    IO;
    pre[0] = 0;
    for (int i = 1; i < 200001; i++)
    {
        int x = i, count = 0;
        while(x) {
            x /= 3;
            count++;
        }
        pre[i] = count + pre[i - 1];
    }
    w(t);
    return 0;
}



