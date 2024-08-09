#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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

int binarySearch(vector<pair<int, int>>& vp, int target) {
    int left = 0, right = vp.size() - 1;
    int indx = vp.size();
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vp[mid].first == target) {indx = min(mid, indx); right = mid - 1;}
        else if (vp[mid].first < target) left = mid + 1;
        else right = mid - 1;
    }
    return indx; 
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        vp.push_back(make_pair(arr[i], i));
    }
    sort(vp.begin(), vp.end()); 
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if(sum % 2 == 0) {
            int target = sum / 2;
            int idx = binarySearch(vp, target);
            if (idx < n && vp[idx].second <= i) count++;
        }
    }
    cout << count << endl;
}

int32_t main() {
    IO;
    w(t);
    return 0;
}
