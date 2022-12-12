#include <iostream>
#include <vector>

using namespace std;

int board[9][9];
vector<pair<int, int>> blank;

bool check(int x, int y, int k) {
    for (int i = 0; i < 9; ++i) {
        if (board[x][i] == k || board[i][y] == k) {
            return false;
        }
    }

    for (int i = 3 * (x / 3); i < 3 * (x / 3) + 3; ++i) {
        for (int j = 3 * (y / 3); j < 3 * (y / 3) + 3; ++j) {
            if (board[i][j] == k) {
                return false;
            }
        }
    }

    return true;
}

void solve(int k) {
    if (k == blank.size()) {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                cout << board[i][j] << ' ';
            }
            cout << '\n';
        }
        exit(0);
    }

    auto &[x, y] = blank[k];

    for (int i = 1; i <= 9; ++i) {
        if (check(x, y, i)) {
            board[x][y] = i;
            solve(k + 1);
            board[x][y] = 0;
        }
    }
}

int main() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cin >> board[i][j];
            if (board[i][j] == 0) {
                blank.push_back(make_pair(i, j));
            }
        }
    }
    solve(0);
    return 0;
}