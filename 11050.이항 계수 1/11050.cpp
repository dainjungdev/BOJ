#include <iostream>

using namespace std;

int factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int n, k;
    cin >> n >> k;
    int nCk = factorial(n) / factorial(n - k) / factorial(k);
    cout << nCk;
    return 0;
}