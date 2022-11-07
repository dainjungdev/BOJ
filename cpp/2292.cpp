#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i;
    for (i = 1; n > 1; ++i) {
        n -= 6 * i;
    }

    cout << i;
    return 0;
}