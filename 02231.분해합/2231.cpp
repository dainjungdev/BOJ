#include <iostream>
#include <string>

using namespace std;

int generate(int num) {
    int sum = num;
    while (num) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    for (int i = n - 9 * to_string(n).size(); i < n; ++i) {
        if (generate(i) == n) {
            cout << i;
            return 0;
        };
    }

    cout << 0;
    return 0;
}