#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;

    int i;
    for (i = 1; x > i; ++i) {
        x -= i;
    }

    if (i % 2 == 0) {
        cout << x << "/" << i - x + 1;
    } else {
        cout << i - x + 1 << "/" << x;
    }
    return 0;
}