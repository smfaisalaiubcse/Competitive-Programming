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
    for (int i = 0; i < n; i++) cin >> arr[i];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        while (temp % 2 == 0) 
        { 
            mp[2]++;
            temp = temp/2; 
        } 
        for (int i = 3; i <= sqrt(temp); i = i + 2) 
        { 
            while (temp % i == 0) 
            { 
                mp[i]++; 
                temp = temp/i; 
            } 
        } 
        if (temp > 2) mp[temp]++;
    }
    for(auto i:mp) {
        if(i.second % n) {cout << "NO" << endl; return;}
    }
    cout << "YES" << endl;
    mp.clear();
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



