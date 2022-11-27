#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int five = n / 5, rem = n % 5;

    while (five >= 0) {
        if (rem % 3 == 0) {
            int three = rem / 3;
            cout << five + three;
            return 0;
        }
        five -= 1;
        rem += 5;
    }

    // If it is impossible to deliver exactly n kilograms, output -1.
    cout << -1;
    return 0;
}