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

void solve()
{
    string inputStr;
    cin >> inputStr;
    int length = inputStr.length();
    vector<char> resultStr;
    vector<int> upperCaseStack, lowerCaseStack;

    for (int i = 0; i < length; ++i)
    {
        if (inputStr[i] == 'b')
        {
            if (!lowerCaseStack.empty())
            {
                resultStr[lowerCaseStack.back()] = -1;
                lowerCaseStack.pop_back();
            }
        }
        else if (inputStr[i] == 'B')
        {
            if (!upperCaseStack.empty())
            {
                resultStr[upperCaseStack.back()] = -1;
                upperCaseStack.pop_back();
            }
        }
        else
        {
            if (static_cast<int>(inputStr[i]) >= 97)
            {
                lowerCaseStack.push_back(resultStr.size());
                resultStr.push_back(inputStr[i]);
            }
            else
            {
                upperCaseStack.push_back(resultStr.size());
                resultStr.push_back(inputStr[i]);
            }
        }
    }

    for (char ch : resultStr)
    {
        if (ch != -1)
        {
            cout << ch;
        }
    }
    cout << endl;
}

int32_t main()
{
    IO;
    w(t);
    return 0;
}
