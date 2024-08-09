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

void solve()
{
    int n; cin >> n;
    vector<pair<double, string>> student;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s; 
        double x; cin >> x;
        student.push_back(make_pair(x, s));
    }
    sort(all(student));
    double lowest = student[0].first;
    double second_lowest = 0.0;
    for(auto i:student) {
        if(i.first != lowest) {second_lowest = i.first; break;}
    }
    for(auto i:student) {
        if(i.first == second_lowest) cout << i.second << endl;
    }
}

int32_t main()
{
    IO;
    solve();
    // w(t);
    return 0;
}



