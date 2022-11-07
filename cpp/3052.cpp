#include <iostream>

using namespace std;

int main() {
    int n;
    bool rem[42] = {};

    for (int i = 0; i < 10; ++i) {
        cin >> n;
        rem[n % 42] = 1;
    }

    int cnt = 0;

    for (bool& r : rem) {
        if (r) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}