#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num == 1) {
        return false;
    }
    for (int j = 2; j * j <= num; ++j) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    int prime_sum = 0, prime_min = -1;

    for (int i = n; i >= m; --i) {
        if (isPrime(i)) {
            prime_sum += i;
            prime_min = i;
        }
    }

    if (prime_sum) {
        cout << prime_sum << '\n';
    }

    cout << prime_min << '\n';
    return 0;
}