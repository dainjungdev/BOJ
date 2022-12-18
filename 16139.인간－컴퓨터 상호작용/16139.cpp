#include <array>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<array<int, 26>> cnt(s.length() + 1);

    for (int i = 1; i <= s.length(); ++i) {
        cnt[i] = cnt[i - 1];
        cnt[i][s[i - 1] - 'a']++;
    }

    int q;
    cin >> q;

    char alpha;
    int l, r;
    for (int i = 0; i < q; ++i) {
        cin >> alpha >> l >> r;
        cout << cnt[r + 1][alpha - 'a'] - cnt[l][alpha - 'a'] << '\n';
    }
    return 0;
}