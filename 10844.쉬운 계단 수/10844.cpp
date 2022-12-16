#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int stair[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int temp[10] = {};

    for (int i = 2; i <= n; ++i) {
        temp[0] = stair[1];
        for (int j = 1; j <= 8; ++j) {
            temp[j] = (stair[j - 1] + stair[j + 1]) % 1000000000;
        }
        temp[9] = stair[8];
        copy(temp, temp + 10, stair);
    }

    int res = 0;
    for (int i = 0; i < 10; ++i) {
        res = (res + stair[i]) % 1000000000;
    }

    cout << res;
    return 0;
}