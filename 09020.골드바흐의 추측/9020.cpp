#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    vector<bool> isPrime(10001, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= 10000; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 10000; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        for (int j = n / 2; j > 0; --j) {
            if (isPrime[j] && isPrime[n - j]) {
                cout << j << ' ' << n - j << '\n';
                break;
            }
        }
    }
    return 0;
}