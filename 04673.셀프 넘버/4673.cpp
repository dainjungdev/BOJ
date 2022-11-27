#include <iostream>

using namespace std;

int d(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    bool a[10036] = {};

    for (int i = 0; i <= 10000; ++i) {
        a[d(i)] = true;
    }

    for (int i = 0; i <= 10000; ++i) {
        if (!a[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}