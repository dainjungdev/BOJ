#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int factor = 2; factor * factor <= n; ++factor) {
        while (n % factor == 0) {
            n /= factor;
            cout << factor << '\n';
        }
    }

    if (n > 1) {
        cout << n << '\n';
    }

    return 0;
}