#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> tile(n + 1);

    tile[0] = 1;
    tile[1] = 1;
    for (int i = 2; i <= n; ++i) {
        tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
    }
    cout << tile[n];
    return 0;
}