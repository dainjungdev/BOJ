#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> x(n);
    vector<int> z(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i].first;
        x[i].second = i;
    }

    sort(x.begin(), x.end(), [](auto &left, auto &right) {
        return (left.first < right.first);
    });

    for (int i = 0; i < n; ++i) {
        cin >> z[i];
    }
    z.erase(unique(z.begin(), z.end()), z.end());

    for (int i = 0; i < n; ++i) {
        cout << x[i] << '';
    }
    return 0;
}