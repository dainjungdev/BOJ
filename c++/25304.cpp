#include <iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        x -= a * b;
    }

    cout << (x == 0 ? "Yes" : "No");
    return 0;
}