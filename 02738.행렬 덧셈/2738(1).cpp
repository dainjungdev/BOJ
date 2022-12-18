#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(n, vector<int>(m));

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