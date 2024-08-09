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
#define Mod 998244353

int accumulate(vector<int> &arr) {
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

unsigned int factorial(unsigned int n) 
{ 
    if (n == 0 || n == 1) 
        return 1; 
    return (n * factorial(n - 1)) % Mod; 
} 

void solve()
{
    string s; 
    cin >> s;
    int n = s.size();
    vector<int> len;
    int temp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i + 1]) 
            temp = (temp + 1) % Mod;
        else {
            len.push_back(temp);
            temp = 1;  
        }
    }
    int mul = 1;
    int mn_op = 0;
    len.push_back(temp);  
    for(auto i : len) {
        // cout << i << " ";
        mul = (mul * i) % Mod;
        mn_op = (mn_op + (i - 1)) % Mod;
    }
    // cout << endl;
    cout << mn_op % Mod << " " << mul * factorial(mn_op) % Mod << endl;
    
}


int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



