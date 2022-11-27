#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> words(n);

    for (int i = 0; i < n; ++i) {
        cin >> words[i];
    }

    sort(words.begin(), words.end(), [](auto &left, auto &right) {
        return (left.length() != right.length())
                   ? left.length() < right.length()
                   : left < right;
    });

    words.erase(unique(words.begin(), words.end()), words.end());

    for (auto &word : words) {
        cout << word << '\n';
    }

    return 0;
}