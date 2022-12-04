#include <iostream>

using namespace std;

bool check(int n) {
    do {
        if (n % 1000 == 666) {
            return true;
        }
    } while ((n /= 10) >= 666);
    return false;
}

int main() {
    int n;
    cin >> n;
    int title = 0;

    while (n) {
        if (check(++title)) {
            --n;
        }
    }

    cout << title;
    return 0;
}