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

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void solve()
{
    int n, k; cin >> n >> k;
    if(isPrime(n) or n == k) {cout << "NO" << endl; return;}
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0 and (n / i >= k)) {cout << "YES" << endl; return;}
    }
    cout << "NO" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



