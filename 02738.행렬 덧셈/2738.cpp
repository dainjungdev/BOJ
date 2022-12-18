#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    int A[100][100] = {}, B[100][100] = {};

    // Matrix A
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }

    // Matrix B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> B[i][j];
        }
    }

    // Matrix A + Matrix B
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << (A[i][j] + B[i][j]) << ' ';
        }
        cout << '\n';
    }

    return 0;
}