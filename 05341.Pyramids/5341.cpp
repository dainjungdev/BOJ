#include <iostream>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            return 0;
        }
        int pyramid = 0;
        for (int i = 1; i <= n; ++i) {
            pyramid += i;
        }
        cout << pyramid << '\n';
    }
}