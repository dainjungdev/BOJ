#include <iostream>

using namespace std;

int main() {
    bool submission[31] = {};

    for (int i = 0; i < 28; ++i) {
        int n;
        cin >> n;
        submission[n] = true;
    }

    for (int i = 1; i <= 30; ++i) {
        if (!submission[i]) {
            cout << i << '\n';
        }
    }
    return 0;
}