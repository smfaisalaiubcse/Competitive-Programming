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

void calculatePrefixSum(vector<int>& arr, vector<int>& pref) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            pref[i] = arr[i];
        } else {
            pref[i] = arr[i] + pref[i - 1];
        }
    }
}

void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    map<int, int> pos;
    for (int i = 0; i < n; i++) {cin >> arr[i]; pos[arr[i]] = i;}
    int x = -1;
    for (int i = n - 1; i > 0; i--)
    {
        if(arr[i] < arr[i - 1]) {x = i; break;}
    } 
    set<int> unq; 
    bool f = false;
    int ans = -1;
    for (int i = 0; i < x; i++)
    {
        if(pos[arr[i]] >= x) {ans = max(ans, pos[arr[i]]); f = true;}
        unq.insert(arr[i]);
    }
    if(f) {
        set<int> temp;
        for (int i = 0; i <= ans; i++)
        {
            temp.insert(arr[i]);
        }
        cout << temp.size() << endl;
        return;
    }
    cout << unq.size() << endl;
}

/*
0 1 2 3 4
2 5 1 2 4



4 => 7
*/

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



