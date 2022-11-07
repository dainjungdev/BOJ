#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    const int max = 123456;
    vector<bool> isPrime(max * 2 + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= max * 2; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max * 2; j += i) {
                isPrime[j] = false;
            }
        }
    }

    while (1) {
        int n;
        cin >> n;

        if (n == 0) {
            break;
        }

        int cnt = 0;
        for (int i = n + 1; i <= 2 * n; ++i) {
            if (isPrime[i]) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}