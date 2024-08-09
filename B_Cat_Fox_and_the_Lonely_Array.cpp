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

bool check(vector<int> &v, int k, int n) {
    vector<int> bits(22, 0);
    for (int i = 0; i < k; i++) {
        int j = 0;
        int x = v[i];
        while(x > 0) {
            if(x % 2) bits[j]++;
            j++;
            x /= 2;
        }
    }
    vector<int> freq = bits;
    for (int i = k; i < n; i++) {
        int j = 0;
        int x = v[i];
        while(x > 0) {
            if(x % 2) freq[j]++;
            j++;
            x /= 2;
        }
        j = 0;
        x = v[i - k];
        while(x > 0) {
            if(x % 2) freq[j]--;
            j++;
            x /= 2;
        }
        for (int i = 0; i < 22; i++)
        {
            if(freq[i] > 0 and bits[i] == 0) return false;
            if(freq[i] == 0 and bits[i] > 0) return false;
        }
    }
    return true;    
}

void solve()
{
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int low = 1, high = n, ans = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(check(arr, mid, n)) {
            high = mid - 1;
            ans = mid;
        } else low = mid + 1;
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



