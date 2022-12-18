#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int s[1025][1025] = {};

    int num;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> num;
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + num;
        }
    }

    int x1, y1, x2, y2;
    for (int i = 0; i < m; ++i) {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1]
             << '\n';
    }
    return 0;
}