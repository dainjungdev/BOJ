#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    long long p[101] = {};

    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    p[5] = 2;

    for (int i = 6; i <= 100; ++i) {
        p[i] = p[i - 5] + p[i - 1];
    }

    int n;
    for (int i = 0; i < t; ++i) {
        cin >> n;
        cout << p[n] << '\n';
    }

    return 0;
}