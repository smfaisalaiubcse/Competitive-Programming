#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> P(Q), V(Q);
    
    for (int i = 0; i < Q; ++i) {
        cin >> P[i] >> V[i];
    }
    
    vector<vector<int>> dp(Q + 1, vector<int>(2, 0));
    
    // Initial state: no previous operation, so both options are valid
    dp[0][0] = dp[0][1] = 1;
    
    for (int i = 1; i <= Q; ++i) {
        int pi = P[i-1];
        int vi = V[i-1];
        
        // Option 1: Perform the first type of operation
        if (i == 1 || V[i-2] <= vi) { 
            dp[i][0] = (dp[i][0] + dp[i-1][0]) % MOD;
        }
        if (i == 1 || V[i-2] <= vi) {
            dp[i][0] = (dp[i][0] + dp[i-1][1]) % MOD;
        }
        
        // Option 2: Perform the second type of operation
        if (i == 1 || V[i-2] <= vi) { 
            dp[i][1] = (dp[i][1] + dp[i-1][0]) % MOD;
        }
        if (i == 1 || V[i-2] <= vi) { 
            dp[i][1] = (dp[i][1] + dp[i-1][1]) % MOD;
        }
    }
    
    int result = (dp[Q][0] + dp[Q][1]) % MOD;
    cout << result << endl;
    
    return 0;
}
