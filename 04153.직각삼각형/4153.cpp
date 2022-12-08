#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int s[3] = {};
    while (cin >> s[0] >> s[1] >> s[2]) {
        if (s[0] == 0) {
            break;
        }
        sort(s, s + 3);
        cout << (s[0] * s[0] + s[1] * s[1] == s[2] * s[2] ? "right" : "wrong")
             << '\n';
    }
    return 0;
}