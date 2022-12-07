#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> suffix(s.size() + 1);

    for (int i = 0; i < s.size(); i++) {
        suffix[i+1] = s.substr(i);
    }

    sort(suffix.begin(), suffix.end());

    int cnt = 0;
    for (int i = 1; i <= s.size(); ++i) {
        int j = 0;
        while (suffix[i - 1][j] == suffix[i][j]) {
            j++;
        }
        cnt += suffix[i].size() - j;
    }

    cout << cnt;
}
