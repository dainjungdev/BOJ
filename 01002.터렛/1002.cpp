#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int sum = (r1 + r2) * (r1 + r2);
        int diff = (r1 - r2) * (r1 - r2);

        if (x1 == x2 && y1 == y2 && r1 == r2) {
            cout << -1 << '\n';
        } else if (d > diff && d < sum) {
            cout << 2 << '\n';
        } else if (d == sum || d == diff) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}