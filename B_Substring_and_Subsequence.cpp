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

string longestCommonSubstring(string &a, string &b)
{
    int m = a.size(), n = b.size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    int maxLength = 0;
    int endPos = 0; // to track the ending position of the longest common substring
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength)
                {
                    maxLength = dp[i][j];
                    endPos = i; // end position of the longest common substring in `a`
                }
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }
    // Extract the longest common substring from `a`
    string lcst = a.substr(endPos - maxLength, maxLength);
    return lcst;
}

string longestCommonSubsequence(string &S1, string &S2)
{
    int m = S1.size(), n = S2.size();
    int LCS_table[m + 1][n + 1];
    // Building the mtrix in bottom-up way
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCS_table[i][j] = 0;
            else if (S1[i - 1] == S2[j - 1])
                LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
            else
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
        }
    }
    int index = LCS_table[m][n];
    char longestCommonSubsequence[index + 1];
    longestCommonSubsequence[index] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (S1[i - 1] == S2[j - 1])
        {
            longestCommonSubsequence[index - 1] = S1[i - 1];
            i--;
            j--;
            index--;
        }
        else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;
        else
            j--;
    }
    return longestCommonSubsequence;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    string lcst = longestCommonSubstring(a, b);
    string lcs = longestCommonSubsequence(a, b);
    // cout << lcs << endl;
    // cout << lcst << endl;
    // cout << a.size() + b.size() - lcs.size() << endl;
    int ans = 0;
    string mcs[b.size()];
    for (int i = 0; i < b.size(); i++)
    {
        int cans = 0;
        int ind = i;
        for (int j = 0; j < a.size(); j++)
        {
            if (a[j] == b[ind])
            {
                ind++;
                cans++;
                mcs[i] += a[j];
                if (ind == b.size())
                    break;
            }
        }
        ans = max(ans, cans);
    }
    int mx = 0;
    for (int i = 0; i < b.size(); i++)
    {
        mx = max((int)mcs[i].size(), mx);
    }
    for (int i = 0; i < b.size(); i++)
    {
        if(mcs[i].size() == mx) cout << mcs[i] << endl;
    }
    cout << a.size() + b.size() - ans << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}
