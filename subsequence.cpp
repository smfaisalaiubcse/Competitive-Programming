#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int longestCommonSubstring(string &a, string &b) {
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int maxLength = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0;
            }
        }
    }
    return maxLength;
}

int main() {
    string a = "abcde";
    string b = "abfce";
    cout << "Length of Longest Common Substring: " << longestCommonSubstring(a, b) << endl;
    return 0;
}
