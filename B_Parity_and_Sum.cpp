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
    vector<int> arr(n);
    int even = 0, evensMx = 0, oddsMx = 0;
    bool allEven = true, allOdd = true;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2) { even++; allEven = false; oddsMx = max(oddsMx, arr[i]);}
        else { evensMx = max(evensMx, arr[i]); allOdd = false;}
    }
    sort(all(arr));
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0 and arr[i] < oddsMx) oddsMx += arr[i];
    }
    if(allEven or allOdd) cout << 0  << endl;
    else if(evensMx < oddsMx) cout << even << endl;
    else cout << even + 1 << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



