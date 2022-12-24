#include <iostream>
#include <string>

using namespace std;

bool isVPS(string &str) {
    int cnt = 0;

    for (char &c : str) {
        if (c == '(') {
            cnt++;
        } else if (cnt == 0) {
            return false;
        } else {
            cnt--;
        }
    }

    return cnt == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    string s;

    for (int i = 0; i < t; ++i) {
        cin >> s;
        if (isVPS(s)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}