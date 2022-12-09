#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> nCk(n + 1, vector<int>(n + 1, 1));
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= i - 1; ++j) {
            nCk[i][j] = (nCk[i - 1][j - 1] + nCk[i - 1][j]) % 10007;
        }
    }

    cout << nCk[n][k];
    return 0;
}