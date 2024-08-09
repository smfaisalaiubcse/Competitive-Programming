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

bool check(vector<int> &first, vector<int> &second, vector<int> &third, int x, string sq) {
    int n = first.size();
    int la = 0, ra = -1, lb = -1, rb = -1, lc = -1, rc = -1;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += first[i];
        if(temp >= x) {ra = i; break;}
    }
    if(ra > n - 3) return false;
    temp = 0;
    lb = ra + 1;
    for (int i = lb; i < n; i++)
    {
        temp += second[i];
        if(temp >= x) {rb = i; break;}
    }
    if(rb > n - 2) return false;
    temp = 0;
    lc = rb + 1;
    for (int i = lc; i < n; i++)
    {
        temp += third[i];
        if(temp >= x) { rc = i; break; }
    }
    if(rc > n - 1 or lc > n - 1) return false;
    if(la < 0 or lb < 0 or lc < 0 or ra < 0 or rb < 0 or rc < 0) return false;
    la++, lb++, lc++, ra++, rb++, rc++;
    if(sq == "abc") cout << la << " " << ra << " " << lb << " " << rb << " " << lc << " " << rc << endl;
    if(sq == "bac") cout << lb << " " << rb << " " << la << " " << ra << " " << lc << " " << rc << endl;
    if(sq == "acb") cout << la << " " << ra << " " << lc << " " << rc << " " << lb << " " << rb << endl;
    if(sq == "cba") cout << lc << " " << rc << " " << lb << " " << rb << " " << la << " " << ra << endl;
    if(sq == "bca") cout << lc << " " << rc << " " << la << " " << ra << " " << lb << " " << rb << endl;
    if(sq == "cab") cout << lb << " " << rb << " " << lc << " " << rc << " " << la << " " << ra << endl;
    return true;
}

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    for (int i = 0; i < n; ++i) cin >> c[i];
    int x = (accumulate(a) + 2) / 3;
    if(check(a, b, c, x, "abc")) return;
    if(check(b, a, c, x, "bac")) return;
    if(check(a, c, b, x, "acb")) return;
    if(check(c, b, a, x, "cba")) return;
    if(check(b, c, a, x, "bca")) return;
    if(check(c, a, b, x, "cab")) return;
    cout << -1 << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



