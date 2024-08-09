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
    vector<int> arr[n];
    map<int, int> isSet;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[i].resize(x);
        for (int j = 0; j < x; j++) {
            cin >> arr[i][j];
            isSet[arr[i][j]]++;
        }
    }
    bool possible=false;
    for (int i = 0; i < n; i++)
    {
        bool ok=true;
        for (int j = 0; j < arr[i].size(); j++) {
            if(isSet[arr[i][j]] > 1) continue;
            ok=false;
            break;
        }
        if(ok){
            possible=true;
            break;
        }
    }
    if(possible) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



