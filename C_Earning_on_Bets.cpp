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

int gcd(int a, int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
}

void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    int res_lcm = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; res_lcm = lcm(res_lcm, arr[i]);
    }
    int sum = 0;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        sum += (res_lcm / arr[i]);
        ans[i] = (res_lcm / arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if(sum >= (ans[i] * arr[i])) { cout << -1 << endl; return; }
    }
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



