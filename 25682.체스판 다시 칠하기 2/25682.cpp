#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    int b[2001][2001] = {};
    string s;

    for (int i = 1; i <= n; ++i) {
        cin >> s;
        for (int j = 1; j <= m; ++j) {
            b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
            if ((i + j) % 2 == (s[j - 1] == 'W')) {
                b[i][j]++;
            }
        }
    }

    int repaint_min = k * k / 2;
    for (int i = 0; i <= n - k; ++i) {
        for (int j = 0; j <= m - k; ++j) {
            int repaint = b[i + k][j + k] - b[i][j + k] - b[i + k][j] + b[i][j];
            repaint_min = min(repaint_min, min(repaint, k * k - repaint));
        }
    }

    cout << repaint_min;
    return 0;
}