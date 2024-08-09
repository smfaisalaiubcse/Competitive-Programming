#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    int ps1 = 0, ps2 = 0, questionCount = 0;

    for (char c : s1) {
        if (c == '+') ps1++;
        else ps1--;
    }

    for (char c : s2) {
        if (c == '+') ps2++;
        else if (c == '-') ps2--;
        else questionCount++;
    }

    int requiredDifference = ps1 - ps2;
    int successfulConfigs = 0;
    int totalConfigs = 1 << questionCount; // 2^questionCount

     

    // Calculate the probability
    double probability = (double)successfulConfigs / totalConfigs;
    cout << fixed << setprecision(12) << probability << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
