#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int map[501] = {};
    int a, b;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        map[a] = b;
    }

    int lis[501] = {};
    for (int i = 1; i <= 500; ++i) {
        lis[i] = 1;
        for (int j = 1; j < i; ++j) {
            if (map[j] < map[i]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    cout << n - *max_element(lis, lis + 501);
    return 0;
}