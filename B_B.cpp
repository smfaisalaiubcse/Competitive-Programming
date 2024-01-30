#include <iostream>
#include <vector>

using namespace std;

int countGoodSubstrings(const string& s) {
    int n = s.length();
    string target = "sysu";
    int m = target.length();
    
    // dp[i] stores the count of occurrences of target in s[0...i-1]
    vector<int> dp(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = m - 1; j >= 0; --j) {
            if (s[i] == target[j]) {
                dp[j + 1] += dp[j]; // Extend the subsequence
            }
        }
        dp[0] += 1; // Empty subsequence
    }

    return dp[m];
}

int main() {
    string s;
    cin >> s;

    int result = countGoodSubstrings(s);

    cout << result << endl;

    return 0;
}
