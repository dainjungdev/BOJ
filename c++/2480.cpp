#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int a[3] = {};
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);

    if (a[0] == a[2]) {
        cout << 10000 + a[0] * 1000;
    } else if (a[0] == a[1] || a[1] == a[2]) {
        cout << 1000 + a[1] * 100;
    } else {
        cout << a[2] * 100;
    }

    return 0;
}