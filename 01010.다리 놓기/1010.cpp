#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<vector<int>> nCk(30, vector<int>(30, 1));
    for (int i = 2; i < 30; ++i) {
        for (int j = 1; j <= i - 1; ++j) {
            nCk[i][j] = nCk[i - 1][j - 1] + nCk[i - 1][j];
        }
    }

    for (int i = 0; i < t; ++i) {
        int n, m;
        cin >> n >> m;
        cout << nCk[m][n] << '\n';
    }
    return 0;
}