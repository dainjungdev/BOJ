#include <iostream>

using namespace std;

int main() {
    int k;
    cin >> k;

    int s[6] = {};
    int d;

    for (int i = 0; i < 6; ++i) {
        cin >> d >> s[i];
    }

    int a = 0, b = 1;
    for (int i : {2, 4}) {
        if (s[i] > s[a]) {
            a = i;
        }
    }
    for (int i : {3, 5}) {
        if (s[i] > s[b]) {
            b = i;
        }
    }

    int area = s[a] * s[b] - s[(a + 3) % 6] * s[(b + 3) % 6];
    cout << area * k;
    return 0;
}