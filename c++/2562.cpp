#include <iostream>

using namespace std;

int main() {
    int a[10] = {};
    int *max = &a[0];

    for (int i = 1; i <= 9; ++i) {
        cin >> a[i];
        max = (*max > a[i]) ? max : &a[i];
    }

    cout << *max << '\n';
    cout << max - &a[0] << '\n';
    return 0;
}