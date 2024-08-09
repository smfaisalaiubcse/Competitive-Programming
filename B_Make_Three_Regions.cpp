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

int accumulate(vector<int> &arr) {
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

void solve()
{
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    int count = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s1[i - 1] == '.' and s1[i] == '.' and s1[i + 1] == '.' and s2[i] == '.' and s2[i + 1] == 'x' and s2[i - 1] == 'x') count++;
        else if(s2[i - 1] == '.' and s2[i] == '.' and s2[i + 1] == '.' and s1[i] == '.' and s1[i + 1] == 'x' and s1[i - 1] == 'x') count++;
    }
    cout << count << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



