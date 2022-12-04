#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    char **board = new char *[n];

    for (int i = 0; i < n; ++i) {
        board[i] = new char[m];
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    int repaint_min = 32;
    for (int x = 0; x <= n - 8; ++x) {
        for (int y = 0; y <= m - 8; ++y) {
            int repaint = 0;
            for (int i = x; i < x + 8; ++i) {
                for (int j = y; j < y + 8; ++j) {
                    if ((i + j) % 2 == 0 && board[i][j] == 'W') {
                        repaint++;
                    } else if ((i + j) % 2 != 0 && board[i][j] == 'B') {
                        repaint++;
                    }
                }
            }
            repaint = (repaint < 32) ? repaint : 64 - repaint;
            repaint_min = (repaint < repaint_min) ? repaint : repaint_min;
        }
    }

    cout << repaint_min;
    delete[] board;
    return 0;
}