#include <iostream>
#include <vector>

using namespace std;

int board[9][9];
bool row[9][10];       // num exists in row[i]
bool col[9][10];       // num exists in col[i]
bool square[3][3][10]; // num exists in square[i][j]
vector<pair<int, int>> blank;

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
        if (!row[x][i] && !col[y][i] && !square[x / 3][y / 3][i]) {
            board[x][y] = i;

            row[x][i] = true;
            col[y][i] = true;
            square[x / 3][y / 3][i] = true;

            solve(k + 1);

            square[x / 3][y / 3][i] = false;
            col[y][i] = false;
            row[x][i] = false;

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
            } else {
                row[i][board[i][j]] = true;
                col[j][board[i][j]] = true;
                square[i / 3][j / 3][board[i][j]] = true;
            }
        }
    }
    solve(0);
    return 0;
}