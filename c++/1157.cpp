#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int a[26] = {};

    for (char &c : s) {
        a[toupper(c) - 'A']++;
    }

    int max_char = 0;
    bool flag = false;

    for (int i = 1; i < 26; ++i) {
        if (a[i] > a[max_char]) {
            flag = false;
            max_char = i;
        } else if (a[i] == a[max_char]) {
            flag = true;
        }
    }

    cout << (flag ? '?' : (char)(max_char + 'A'));
    return 0;
}