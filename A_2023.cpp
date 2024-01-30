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
    int b, a; cin >> b >> a;
    vector<int> arr(b);
    int two_thousand_twenty_three = 2023;
    int mul = 1;
    for (int i = 0; i < b; i++) {
        cin >> arr[i];
        mul *= arr[i];
    }
    if(mul == two_thousand_twenty_three) {
        cout << "YES" << endl;
        for (int i = 0; i < a; i++)
            cout << 1 << " ";
        cout << endl;
    } else {
        if(two_thousand_twenty_three % mul) {cout << "NO" << endl; return;}
        cout << "YES" << endl;
        cout << two_thousand_twenty_three / mul << " ";
        for (int i = 0; i < a - 1; i++)
        {
            cout << 1 << " " ;
        }
        cout << endl;
    }
    
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



