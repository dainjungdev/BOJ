#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int d[21][21][21] = {};

    for (int i = 0; i <= 20; ++i) {
        for (int j = 0; j <= 20; ++j) {
            d[0][i][j] = 1;
            d[i][0][j] = 1;
            d[i][j][0] = 1;
        }
    }

    for (int i = 1; i <= 20; ++i) {
        for (int j = 1; j <= 20; ++j) {
            for (int k = 1; k <= 20; ++k) {
                if (i == 0 || j == 0 || k == 0) {
                    d[i][j][k] = 1;
                } else if (i < j && j < k) {
                    d[i][j][k] =
                        d[i][j][k - 1] + d[i][j - 1][k - 1] - d[i][j - 1][k];
                } else {
                    d[i][j][k] = d[i - 1][j][k] + d[i - 1][j - 1][k] +
                                 d[i - 1][j][k - 1] - d[i - 1][j - 1][k - 1];
                }
            }
        }
    }

    int a, b, c;

    while (cin >> a >> b >> c) {
        if (a == -1 && b == -1 && c == -1) {
            return 0;
        }

        cout << "w(" << a << ", " << b << ", " << c << ") = ";

        if (a <= 0 || b <= 0 || c <= 0) {
            cout << d[0][0][0] << '\n';
        } else if (a > 20 || b > 20 || c > 20) {
            cout << d[20][20][20] << '\n';
        } else {
            cout << d[a][b][c] << '\n';
        }
    }
}