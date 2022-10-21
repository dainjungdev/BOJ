#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int num = n;
    int cnt = 0;

    while (1) {
        if (num < 10) {
            num += num * 10;
        } else {
            num = (num % 10) * 10 + (num % 10 + num / 10) % 10;
        }

        cnt++;

        if (num == n) {
            cout << cnt;
            return 0;
        }
    }
}