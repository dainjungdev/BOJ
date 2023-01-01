#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> stk;
    string res = "";
    int num;

    int i = 1;
    while (cin >> num) {
        for (; i <= num; ++i) {
            stk.push(i);
            res += "+\n";
        }

        if (stk.top() == num) {
            stk.pop();
            res += "-\n";
        } else {
            cout << "NO" << '\n';
            return 0;
        }
    }

    cout << res;
    return 0;
}