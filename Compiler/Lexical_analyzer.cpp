#include <bits/stdc++.h>

using namespace std;

bool isOperator(char x) {
    if (x == '=') {
        return true;

    } else if (x == '+') {
        return true;
    } else if (x == '-') {
        return true;
    } else if (x == '%') {
        return true;
    } else if (x == '/') {
        return true;
    } else if (x == '*') {
        return true;
    } else if (x == ';') {
        return true;
    }
    return false;
}

int main() {
    cout << "Enter your expression: ";
    string s;
    getline(cin, s);

    //checking laxical errors
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' ' or isOperator(s[i]) or s[i] == '=') {
            if(isdigit(s[i + 1])) {
                cout << "Lexical error!!" << endl;
                return 0;
            }
        }
        if(isdigit(s[0])) {
            cout << "Lexical error!!" << endl;
            return 0;
        }
    }
    cout << "\nTokens: ";
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            //checking if it is operator or not
            if (s[i] == '=') {
                cout << "<=>, ";
            } else if (s[i] == '+') {
                cout << "<+>, ";
            } else if (s[i] == '-') {
                cout << "<->, ";
            } else if (s[i] == '%') {
                cout << "<%>, ";
            } else if (s[i] == '/') {
                cout << "</>, ";
            } else if (s[i] == '*') {
                cout << "<*>, ";
            } else if (s[i] == ';') {
                cout << "<;> ";
            } else if (isdigit(s[i])) {
                //checking if it is a number or not(more than one digit)
                cout << "<";
                while (i < s.size() and isdigit(s[i])) {
                    cout << s[i++];
                }
                cout << ">, ";
                --i;
            }
            else {
                //checking also if it is more than one charactered identifier or not
                while (i < s.size() and !isOperator(s[i]) and s[i] != ' ') i++;
                cout << "<id " << cnt++ << ">, ";
                --i;
            }
        }
    }

    cout << endl;
    return 0;
}


