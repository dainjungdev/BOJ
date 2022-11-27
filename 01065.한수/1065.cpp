#include <iostream>

using namespace std;

int CountHansu(int num) {
    if (num < 100) {
        return num;
    }

    int cnt = 99;
    for (int i = 100; i <= num; ++i) {
        if (i / 100 - (i / 10) % 10 == (i / 10) % 10 - i % 10) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    cout << CountHansu(n);
    return 0;
}