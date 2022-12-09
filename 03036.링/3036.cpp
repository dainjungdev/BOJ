#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int numerator;
    cin >> numerator;

    for (int i = 1; i < n; ++i) {
        int denominator;
        cin >> denominator;
        int divisor = gcd(numerator, denominator);
        cout << numerator / divisor << '/' << denominator / divisor << '\n';
    }

    return 0;
}