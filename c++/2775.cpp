#include <iostream>
#include <numeric>

using namespace std;

int main() {
    // count the number of members in each room
    int member[15][15] = {};
    iota(member[0], member[0] + 15, 0);

    for (int i = 1; i < 15; ++i) {
        member[0][i] = i;
        for (int j = 1; j < 15; ++j) {
            member[i][j] = member[i - 1][j] + member[i][j - 1];
        }
    }

    // test case
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int k, n;
        cin >> k >> n;
        cout << member[k][n] << '\n';
    }

    return 0;
}