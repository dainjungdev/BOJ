#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; // number of black papers

    bool a[100][100] = {}; // white papers
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        for (int j = x; j < x + 10; ++j) {
            for (int k = y; k < y + 10; ++k) {
                a[j][k] = true;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            if (a[i][j]) {
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}