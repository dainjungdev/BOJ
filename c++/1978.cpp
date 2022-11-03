#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = n;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        switch (num) {
        case 1:
            cnt--;
        default:
            for (int j = 2; j < num; ++j) {
                if (num % j == 0) {
                    cnt--;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}