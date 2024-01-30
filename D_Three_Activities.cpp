#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef unsigned long int ll;
#define int long long
typedef long double LD;
#define all(x) x.begin(),x.end()
#define w(t)     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
using namespace std;

void findSecondAndThirdMax(const vector<int>& vec, int& secondMax, int& thirdMax) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for (const int& num : vec) {
        if (num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num < max1) {
            max3 = max2;
            max2 = num;
        } else if (num > max3 && num < max2) {
            max3 = num;
        }
    }

    secondMax = max2;
    thirdMax = max3;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        cin >> c[i];

    int posA = max_element(a.begin(), a.end()) - a.begin();
    int posB = max_element(b.begin(), b.end()) - b.begin();
    int posC = max_element(c.begin(), c.end()) - c.begin();

    int mxA = *max_element(all(a));
    int mxB = *max_element(all(b));
    int mxC = *max_element(all(c));
    if(posA == posB) {
        int secondMax, thirdMax;
        findSecondAndThirdMax(b, secondMax, thirdMax);
        mxB = secondMax;
    } 
    if(posC == posA) {
        int secondMax, thirdMax;
        findSecondAndThirdMax(c, secondMax, thirdMax);
        if(posC == posB) mxC = thirdMax;
        else mxC = secondMax;
    }
    cout << mxA + mxB + mxC << endl;
}

int32_t main()
{
    IO;
    // solve();
    w(t);
    return 0;
}



