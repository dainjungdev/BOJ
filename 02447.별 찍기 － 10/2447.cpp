#include <iostream>

using namespace std;

int i, j;

void star(int num) {
    if ((i / num) % 3 == 1 && (j / num) % 3 == 1) {
        cout << ' ';
    } else if (num == 1) {
        cout << '*';
    } else {
        star(num / 3);
    }
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            star(n);
        }
        cout << '\n';
    }
    return 0;
}