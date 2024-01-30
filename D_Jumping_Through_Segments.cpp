#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ull;
#define int long long
typedef long double LD;
#define all(x) x.begin(), x.end()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

int find_minimum_k(const vector<pair<int, int>>& segs) {
    int low = 0, high = 1e9; 

    while (low < high) {
        int k = (low + high) / 2;
        bool valid = true;

        int min_position = 0, max_position = 0; 

        for (auto segment : segs) {
            min_position = max(min_position, segment.first);
            max_position = min(max_position + k, segment.second);

            if (min_position > max_position) {
                valid = false;
                break;
            }
            min_position = max(min_position - k, (int)0);
        }

        if (valid) {
            high = k;
        } else {
            low = k + 1;
        }
    }

    return low;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> segs(n); 
    for (int i = 0; i < n; i++) {
        cin >> segs[i].first >> segs[i].second;
    }
    int result = find_minimum_k(segs); 
    cout << result << endl;
}

int32_t main()
{
    IO;
    w(t);
    return 0;
}
