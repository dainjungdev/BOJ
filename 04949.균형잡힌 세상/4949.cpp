#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isBalanced(string s) {
    stack<char> stk;
    for (char &c : s) {
        if (c == '[' || c == '(') {
            stk.push(c);
        } else if (c == ']') {
            if (!stk.empty() && stk.top() == '[') {
                stk.pop();
            } else {
                return false;
            }
        } else if (c == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    return stk.empty();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    while (getline(cin, str)) {
        if (str == ".") {
            return 0;
        }
        if (isBalanced(str)) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}