#include <iostream>

using namespace std;

int n;
int board[14][14] = {};
int cnt = 0;

void n_queen(int y) {
    if (y == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; ++i) {
        if (board[y][i] == 0) {
            board[y][i] = 1;
            for (int j = y + 1; j < n; ++j) {
                --board[j][i];
                if (i - j + y >= 0) {
                    --board[j][i - j + y];
                }
                if (i + j - y < n) {
                    --board[j][i + j - y];
                }
            }

            n_queen(y + 1);

            for (int j = y + 1; j < n; ++j) {
                ++board[j][i];
                if (i - j + y >= 0) {
                    ++board[j][i - j + y];
                }
                if (i + j - y < n) {
                    ++board[j][i + j - y];
                }
            }
            board[y][i] = 0;
        }
    }
}

int main() {
    cin >> n;
    n_queen(0);
    cout << cnt;
    return 0;
}