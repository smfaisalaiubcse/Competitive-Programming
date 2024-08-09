#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define int long long
using namespace std;

int dp[200005];  // Adjusted size for maximum constraint
vector<int> pref(200005);

int find(int ind, int n, int l, int r) {
    if (ind == n) return 0;
    if (dp[ind] != -1) return dp[ind];
    int start = ind, last = n - 1;
    int reqInd = -1;
    while (start <= last) {
        int mid = (start + last + 1) / 2;
        if (pref[mid + 1] - pref[ind] >= l) {
            last = mid - 1;
            reqInd = mid;
        } else {
            start = mid + 1;
        }
    }
    if (reqInd != -1 && pref[reqInd + 1] - pref[ind] <= r)
        return dp[ind] = max(1 + find(reqInd + 1, n, l, r), find(ind + 1, n, l, r));
    else return dp[ind] = find(ind + 1, n, l, r);
}

void solve() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    pref[0] = 0;  // Initialize the first element of prefix sum to 0
    for (int i = 0; i < n; i++) {
        pref[i + 1] = arr[i] + pref[i];
    }
    fill(dp, dp + n + 1, -1);  // Reset dp array for each test case
    int result = find(0, n, l, r);
    cout << result << endl;
}

int32_t main() {
    IO;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
