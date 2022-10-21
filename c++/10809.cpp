#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int a[26] = {};
    fill_n(a, 26, -1);
    
    for (char& c : s) {
        if (a[c - 'a'] == -1) {
            a[c - 'a'] = &c - &s[0];
        }
    }

    for (int index : a) {
        cout << index << ' ';
    }
    return 0;
}