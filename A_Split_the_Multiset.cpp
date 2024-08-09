#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int accumulate(vector<int> &arr)
{
    int n = arr.size(), sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

void solve()
{
    int n, k; cin >> n >> k;
    stack<int> st;
    st.push(n);
    int ans = 0;
    while (st.size() < n)
    {
        int n = st.top();
        st.pop();
        for (int i = 0; i < min(k - 1, n - 1); i++) st.push(1);
        st.push(n - k + 1);
        ans++;
    }
    cout << ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
