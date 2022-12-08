#include <iostream>

using namespace std;

int cx, cy, r;

bool inside_circle(int x, int y) {
    return ((x - cx) * (x - cx) + (y - cy) * (y - cy) < r * r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int n;
        cin >> n;
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            cin >> cx >> cy >> r;
            if (inside_circle(x1, y1) != inside_circle(x2, y2)) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}