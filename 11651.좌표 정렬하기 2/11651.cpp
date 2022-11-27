#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> coordinates(n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        coordinates[i] = make_pair(x, y);
    }

    sort(coordinates.begin(), coordinates.end(), [](auto &left, auto &right) {
        return (left.second != right.second) ? left.second < right.second
                                             : left.first < right.first;
    });

    for (int i = 0; i < n; ++i) {
        cout << coordinates[i].first << ' ' << coordinates[i].second << '\n';
    }

    return 0;
}